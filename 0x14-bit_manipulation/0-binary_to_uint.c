#include "main.h"

/**
 * binary_to_uint - binary convert to int
 * @b: binary to convert
 * Return: decimal number or 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  dec_num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		dec_num <<= 1;
		if (b[i] == '1')
			dec_num += 1;
	}
	return (dec_num);
}
