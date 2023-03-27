#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to be reversed
 * Return: always 0
 */

void rev_string(char *s)
{
	int i, count = 0;
	char d = s[0];

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count ; i++)
	{
		count--;
		d = s[i];
		s[i] = s[count];
		s[count] = d;
	}

}
