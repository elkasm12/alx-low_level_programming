#include "lists.h"

/**
 * add_node - add node in the begining
 * @head: head of list
 * @str: str to add
 * Return: new_h
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!head || !new_h)
		return (NULL);
	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
		{
			free(new_h);
			return (NULL);
		}
		new_h->len = strlen(new_h->str);
	}
		new_h->next = *head;
		*head = new_h;
		return (new_h);
}

