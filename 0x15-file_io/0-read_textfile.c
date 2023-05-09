#include "main.h"

/**
 * read_textfile - read a text from a file
 * @filename: file to read from
 * @letters: number of bytes to read and print them
 * Return: str
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t str;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	str = read(fp, &buf[0], letters);
	str = write(STDOUT_FILENO, &buf[0], str);
	close(fp);
	return (str);
}
