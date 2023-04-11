#include "main.h"

/**
 * create_array - create array with given size
 * @size: array size
 * @c: the char to be put in the memory
 * Return: 0 if size is 0 or n
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	for (i = 0; i < size ; i++)
		n[i] = c;
	return (n);
}
