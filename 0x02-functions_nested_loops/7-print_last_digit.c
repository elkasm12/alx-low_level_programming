#include "main.h"

/**
 * print_last_digit - print lat digit of a number
 *
 * @i: parameter to be checked
 *
 * Return: always m
 */
int print_last_digit(int i)
{
	int m;

	m  = i % 10;
	if (m < 0)
		m = -(m);
	else
		m = m;
	_putchar(m + '0');
	return (m);
}

