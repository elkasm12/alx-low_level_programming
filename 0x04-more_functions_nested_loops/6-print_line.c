#include "main.h"

/**
 * print_line - line of n _
 *
 * @n: parameter to be entred
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (n != 0)
			_putchar('_');
	}
	_putchar('\n');
}
