#include <stdio.h>
#include <math.h>

/**
 * main - this the main function
 *
 * Return: always 0
 */

int main(void)
{
	long i, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1 ; i <= square ; i++)
	{
		if (number % i == 0)
		{
			maxf = number / i;
		}
	}
	printf("%ld", maxf);
	printf("\n");
	return (0);
}
