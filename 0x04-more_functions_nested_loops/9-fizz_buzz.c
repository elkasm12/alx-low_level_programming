#include <stdio.h>

/**
 * main - this id the main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
