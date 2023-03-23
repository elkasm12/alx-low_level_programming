#include "main.h"

/**
 * print_sign - checks sign of n
 *
 * @n: function to be printed
 *
 * Return: 1 if positive , 0 if null , -1 if negetive
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);

}
