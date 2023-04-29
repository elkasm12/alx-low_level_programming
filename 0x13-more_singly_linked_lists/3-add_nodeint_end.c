#include "lists.h"

/**
 * add_nodeint_end - node in the end
 * @head: heaad of the node
 * @n: integer data
 * Return: adress of the head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_e = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!head || !node_e)
		return (NULL);
	node_e->n = n;
	node_e->next = NULL;
	if (last == NULL)
		*head = node_e;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = node_e;
	}
	return (*head);
}
