#include "lists.h"

/**
 * pop_listint - head delete
 * @head: head's node
 * Return: n value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head)
		return (0);
	node = *head;
	if (!node)
		return (0);
	*head = node->next;
	n = node->n;
	free(node);

	return (n);
}
