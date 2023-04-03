#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sum of a matrix
 * @a: array (matrix)
 * @size: size of matrix
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
