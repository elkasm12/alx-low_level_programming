#include "main.h"

/**
 * alloc_grid - allocate dimensional array
 * @width: width of array
 * @height: row of array
 * Return arr
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	arr = malloc(height * sizeof(*arr));
	if (height <= 0 || width <= 0 || arr == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
