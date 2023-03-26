#include "main.h"

/**
 * print_triangle - triangle reverse
 *
 * @size: parameter to be entred
 *
 * Return: alwyas 0
 */

void print_triangle(int size)
{
	int i;
	int j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - i ;  j > 1 ; j--)
			{
				_putchar(' ');
			}
			for  (k = 0 ; k <= i ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
