#include "lists.h"

/**
 * add_nodeint - add node in the beg
 * @head: head of the node
 * @n: data of the node
 * Return: adress of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_h = malloc(sizeof(listint_t));

	if (!head || !new_h)
		return (NULL);
	if (n)
	{
		new_h->n = n;
		if (!new_h->n)
		{
			free(new_h);
			return (NULL);
		}
	}
	new_h->next = *head;
	*head = new_h;
	return (new_h);


}
