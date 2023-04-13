#include "main.h"

/**
 * malloc_checked - malloc check
 * @b: var to check
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);
	return (s);
}
