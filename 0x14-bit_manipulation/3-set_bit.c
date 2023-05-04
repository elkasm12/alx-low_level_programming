#include "main.h"

/**
 * set_bit - set bit to one  for a given index
 * @n: number to change
 * @index:index to set
 * Return: 1 if ok or (-1) if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!((*n) |= 1UL << index));
}
