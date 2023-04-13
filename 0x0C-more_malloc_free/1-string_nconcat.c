#include "main.h"

/**
 * str_concat - string concate
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, c1 = 0, c2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		c1++;
	for (i = 0; s2[i] != '\0'; i++)
		c2++;
	s = malloc(sizeof(char) * (c1 + n) + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < c1 + n; i++)
		s[i] = s1[i];
	for(j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
        s[i] = '\0';
	return (s);

}
