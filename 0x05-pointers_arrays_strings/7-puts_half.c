#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to be printed
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, count = 0;
	int m,n;
	
	for (i = 0 ; str[i] != 0 ; i++)
		count++;
	m = count - 1;
	if (m % 2 == 0)
		n = m / 2;
	else
		n = (m - 1) / 2;
	for (i = n + 1 ; i <= m ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
