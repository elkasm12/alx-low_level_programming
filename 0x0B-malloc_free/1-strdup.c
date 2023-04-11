#include "main.h"

/**
 * _strdup - string duplicate
 * @str: the string to duplicate
 * Return: 0 or s
 */

char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	s = malloc(count * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		s[i] = str[i];
	return (s);
}
