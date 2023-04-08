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
	if (argc > 1)
	{
		int i;
		int mul = 1;
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}	
			printf("%d\n", mul);
	}
	else
		printf("error\n");
	return (0);
}
