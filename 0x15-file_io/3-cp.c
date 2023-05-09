#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NORD "Error: Can't read from file %s\n"
#define ERR_NOWR "Error: Can't write to %s\n"
#define ERR_NOCL "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument value
 *
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int from_fp = 0, to_fp = 0;
	ssize_t str;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fp = open(av[1], O_RDONLY);
	if (from_fp == -1)
		dprintf(STDERR_FILENO, ERR_NORD, av[1]), exit(98);
	to_fp = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fp == -1)
		dprintf(STDERR_FILENO, ERR_NOWR, av[2]), exit(99);

	while ((str = read(from_fp, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fp, buf, str) != str)
			dprintf(STDERR_FILENO, ERR_NOWR, av[2]), exit(99);
	if (str == -1)
		dprintf(STDERR_FILENO, ERR_NORD, av[1]), exit(98);

	from_fp = close(from_fp);
	to_fp = close(to_fp);
	if (from_fp)
		dprintf(STDERR_FILENO, ERR_NOCL, from_fp), exit(100);
	if (to_fp)
		dprintf(STDERR_FILENO, ERR_NOCL, to_fp), exit(100);

	return (EXIT_SUCCESS);
}
