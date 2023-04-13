#include "main.h"
/**
 * _calloc - calloc implement
 * @nmemb: number of memory byte
 * @size: var size
 * Return: ml
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mal;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	mal = malloc(sizeof(int) * nmemb);
	if (mal == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mal[i] = 0;
	return (mal);
}

