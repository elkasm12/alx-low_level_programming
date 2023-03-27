#include "main.h"

/**
 * swap_int - swap two integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
