#include "main.h"

/**
 * get_bit - return value of bit
 * @n: number to get bit from 
 * @index: index to get
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n)*8)
		return (-1);
	return ((n>>index) & 1);
}
