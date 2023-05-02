#include "lists.h"

/**
 * sum_listint - sum elements of node
 * @head: address of the head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head =  head->next;
	}
	return (sum);
}
