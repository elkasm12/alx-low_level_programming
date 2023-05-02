#include "lists.h"

/**
 * insert_nodeint_at_index - insert a  node at index
 * @head: head of node
 * @idx: index to insert a node at
 * @n: integer]
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *insert;

	if (!head)
		return (NULL);
	if (idx !=  0)
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			temp =  temp->next;
			if (!temp)
				return (NULL);
		}
	}
	insert = malloc(sizeof(listint_t));
	if (!insert)
		return (NULL);
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}
	insert->next = temp->next;
	temp->next = insert;
	return (insert);
}
