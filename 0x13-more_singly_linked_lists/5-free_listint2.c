#include "lists.h"

/**
 * free_listint2 - free list
 * @head: adress of the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node_next;

	if (!head)
		return;
	while (*head)
	{
		node_next = (*head)->next;
		free(*head);
		*head = node_next;
	}
}
