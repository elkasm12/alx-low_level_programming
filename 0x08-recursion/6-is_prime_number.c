#include "main.h"

/**
 * is_divisible - tests whether the number is divisible
 * @n: the number being tested
 * @check: the checking divisor
 * Return: result
 */
int is_divisible(int n, int check)
{
	if (n % check == 0)
	{
		return (0);
	}

	if (check == n / 2)
	{
		return (1);
	}

	return (is_divisible(n, check + 1));
}

/**
 * is_prime_number - is the integer a prime number
 * @n: the number being tested
 * Return: result
 */
int is_prime_number(int n)
{
	int check = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, check));
}
