#include "lists.h"


/**
 * _strlen - count string
 * @s: string to be counted
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	if (!s)
		return (0);

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

/**
 * print_list - print all elements of a list
 * @h: pointer to the head
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
