#include "main.h"

/**
 * _strncpy - copies string to dest var
 * @dest: dest copy
 * @src: source copy
 * @n: numbers of char to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
		j++;
	}
	for (i = j ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}

