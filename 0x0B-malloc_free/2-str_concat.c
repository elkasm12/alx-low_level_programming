#include "main.h"

/**
 * str_concat - string concate
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or s
 */

char *str_concat(char *s1, char *s2)
{
	int i, c1 = 0, c2 = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
		c1++;
	for (i = 0; s2[i] != '\0'; i++)
		c2++;
	s = malloc((c1 + c2) * sizeof(char) + 2);

	for (i = 0; i < c1; i++)
		s[i] = s1[i];
	s[c1] = ' ';
	for (i = c1 + 1; i < (c1 + c2 + 1); i++)
		s[i] = s2[i - c1 - 1];
	s[c1 + c2 + 1] = '\0';
	return (s);
}
