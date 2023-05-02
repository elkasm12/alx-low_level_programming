#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at idx
 * @head: head of node
 * @index: index to delete
 * Return: node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *node;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);


}

