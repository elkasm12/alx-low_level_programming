#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int p;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (p = 0 ; p < 10 ; p++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(p + '0');
					if (i != 9 &&  j != 8 && k != 9 && p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
