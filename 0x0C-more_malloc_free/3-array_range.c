#include "main.h"

/**
 * array_range - array range
 * @min: minumum range
 * @max: maximum range
 * Return: array
 */

int *array_range(int min, int max)
{
	int i, n;
	int *ml;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ml = malloc(sizeof(int) * n);
	if (ml == 0)
		return (NULL);
	for (i = 0; i < n; i++)
		ml[i] = min++;
	return (ml);
}
