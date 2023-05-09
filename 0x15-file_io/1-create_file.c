#include "main.h"
/**
 * _strlen - count string
 * @s: string to be counted
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

/**
 * create_file - create a file and put test in it
 * @filename: name of the file to create
 * @text_content: text of the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	size_t str, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (length)
		str = write(fp, text_content, length);
	close(fp);
	return (str == length ? 1 : -1);
}
