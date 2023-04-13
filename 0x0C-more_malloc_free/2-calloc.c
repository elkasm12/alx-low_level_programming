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
	char *str = s;

	for (i = 0 ; i < n ; i++)
	{
		*s++ = b;
	}
	return (str);
}

/**
 * _calloc - calloc implement
 * @nmemb: number of memory byte
 * @size: var size
 * Return: ml
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ml;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ml = malloc(sizeof(int) * nmemb + 1);
	if (ml == 0)
		return (NULL);
	_memset(ml, 0, sizeof(int) * nmemb);
	return (ml);
}
