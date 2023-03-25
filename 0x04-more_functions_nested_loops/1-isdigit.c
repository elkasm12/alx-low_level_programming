#include "main.h"

/**
 * _isdigit - checks if char is digit 
 *
 * @c: checks digit
 *
 * Return: 1 if char is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
