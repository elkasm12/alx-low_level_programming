#include "lists.h"

/**
 * list_len - list length
 * @h: head of pointer
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (i)
	{
		h = h->next;
		i++;
	}
	return (i);
}
