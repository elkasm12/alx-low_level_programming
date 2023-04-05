#include "main.h"

/**
 * _sqrt - finds the square root of a value
 * @val: previous value
 * @sqrt: the square value
 * Return: the square root
 */
int _sqrt(int val, int sqrt)
{
	if (val > sqrt)
	{
		return (-1);
	}
	else if (val * val == sqrt)
	{
		return (val);
	}

	return (_sqrt(val + 1, sqrt));
}

/**
 * _sqrt_recursion - recursive square root of a number
 * @n: the integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
