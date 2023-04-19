#include "function_pointers.h"

/**
 * array_iterator - array iterator function
 * @array: array to iterarate
 * @size:size of the array
 * @action: function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
			action(*array++);
	}
}
