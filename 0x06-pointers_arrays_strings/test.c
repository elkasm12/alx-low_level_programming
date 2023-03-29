#include <stdio.h>
#include "main.h"

int main(void)
{
	int i;

	for (i = 0; i < 98; i++)
	{
	if (i % 10)
	{
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
