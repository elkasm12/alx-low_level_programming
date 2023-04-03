#include "main.h"
#include <stddef.h>

/**
 * _strchr - find charcter in memeory
 * @s: string to look in
 * @c: char to look for
 * Return: s+i address and Null if there isn't
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
