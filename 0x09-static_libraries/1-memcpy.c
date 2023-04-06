#include "main.h"

/**
 * _memcpy - cpy block of memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to cpy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
