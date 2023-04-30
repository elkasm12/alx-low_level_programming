#include "lists.h"

/**
 * pop_listint - head delete
 * @head: head's node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	size_t n;

	if (!head)
		return (0);
	node = *head;
	*head = node->next;
	n = node->n;
	free(node);

	return (n);
}
