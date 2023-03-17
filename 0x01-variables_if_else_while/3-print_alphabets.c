#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	char i, j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
