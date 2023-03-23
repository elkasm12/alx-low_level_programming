#include "main.h"

/**
 * _abs - absolute value
 *
 * @a: parameter to be checked value
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
