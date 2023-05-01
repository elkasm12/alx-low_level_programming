#include "lists.h"

/**
 * get_nodeint_at_index - node at index
 * @head: head of node
 * @index: index to stop at
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int n;

	if (!head)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
