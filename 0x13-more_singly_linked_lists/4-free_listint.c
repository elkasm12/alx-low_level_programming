#include "lists.h"

/**
 * free_listint - free list
 * @head: adress of the head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node, *node_next;

	if (!head)
		return;
	node = head;
	while (node)
	{
		node_next = node->next;
		free(node);
		node = node_next;
	}
}
