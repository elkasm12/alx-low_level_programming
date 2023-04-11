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

	for (i = 0; str[i] != '\0'; i++)
		count++;
	s = malloc(count*sizeof(char));

	if (count == 0 || s == 0)
		return (0);
	for (i = 0; i < count; i++)
		s[i] = str[i];
	return (s);
}
