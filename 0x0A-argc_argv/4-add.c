#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - this is the main function
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
				{
					printf("Error\n");
					return (1);
				}
				else
					sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
