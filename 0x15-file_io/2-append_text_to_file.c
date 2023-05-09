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

	if (!s)
		return (0);
	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
/**
 * append_text_to_file - append text to a file
 * @filename: file to append text on 
 * @text_content: text to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	size_t str = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (length)
		str = write(fp, text_content, length);
	close(fp);
	return (str == length ? 1 : -1);
}
