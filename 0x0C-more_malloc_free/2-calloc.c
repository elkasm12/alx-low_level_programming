#include "main.h"
/**
 * _calloc - calloc implement
 * @nmemb: number of memory byte
 * @size: var size
 * Return: ml
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ml;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ml = malloc(sizeof(int) * nmemb);
	if (ml == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ml[i] = 0;
	return (ml);
}

