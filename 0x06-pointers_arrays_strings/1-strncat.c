#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of char to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);

}
