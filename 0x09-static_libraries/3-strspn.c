#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: main string to be scanned
 * @accept: string containing the list of characters to natch
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, check;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (k);
		}
	}

	return (0);
}
