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
 * argstostr - argument hold
 * @ac: argument count
 * @av: argument array
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int i, j, lc = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, lc++)
		lc += _strlen(av[i]);
	s = (char *) malloc(lc * sizeof(char) + 1);

	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0' ; j++, c++)
			s[c] = av[i][j];
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
