#include "main.h"

/**
 * _memset - put a constant into a block of memory
 * @s: memory block
 * @b: constant to be stored
 * @n: number of repition
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);

}
