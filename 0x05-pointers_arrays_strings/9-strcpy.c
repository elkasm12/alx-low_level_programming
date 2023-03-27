#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copy char
 * @dest: array to copy to
 * @src: array to copy from
 * Return: NULL or dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
