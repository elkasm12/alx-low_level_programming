#include "lists.h"
/**
 * print_listint - print number of node
 * @h: head of node
 * Return: i number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

