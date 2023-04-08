#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
		printf("\n");
	}
	else
		printf("error\n");
	return (0);
}
