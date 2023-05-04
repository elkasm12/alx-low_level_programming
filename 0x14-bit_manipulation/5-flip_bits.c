#include "main.h"

/**
 * flip_bits - flip a number to an other
 * @n: number to flip
 * @m: number to flip to
 * Return: count of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorop = n  ^ m;
	unsigned int count = 0;

	while (xorop)
	{
		if (xorop & 1UL)
			count++;
		xorop = xorop >> 1;
	}
	return (count);
}

