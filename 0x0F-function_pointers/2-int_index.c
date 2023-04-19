#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array to look in
 * @size: size of array
 * @cmp: compare criteria
 * Return: 1 or i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
