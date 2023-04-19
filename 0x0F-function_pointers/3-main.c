#include "3-calc.h"

/**
 * main - the main func
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */

int main(int argc, char **argv)
{
	int  a, b;
	char *n;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	n = argv[2];
	if (get_op_func(n) == NULL || argv[2][1])
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", get_op_func(n)(a, b));
	return (0);
}
