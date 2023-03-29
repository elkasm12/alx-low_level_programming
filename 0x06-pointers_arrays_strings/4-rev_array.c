#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array to be reversed
 * @n: number of elemnets in array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = j;
	}
}
