#include "lists.h"

/**
 * listint_len - length of list
 * @h: head of node
 * Return: i length of node
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
