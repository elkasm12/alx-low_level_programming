#include "main.h"

/*
 * binary_to_uint - convert binary to int;
 * @b: binary to convert
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dec_num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48  || b[i] != 49)
			return (0);
		dec_num <<= 1;
		if (b[i] == 1)
			dec_num += 1;
	}
	return (dec_num);
}
