#include "main.h"
/**
 * _puts - prints string
 * @str: contain string
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');

}

/**
 * _atoi - converts  string to n integer
 * @s: string input parameter
 * Return: converted integer from string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while
	(*s++);
	return (num  * sign);
}
/**
 * _strlen - count string
 * @s: string to be counted
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

int main(int argc, char **argv)
{
	int i, j, len1, len2, len, *mul, n1, n2;
	char *s1, *s2;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i] != '\0'; j++)
		{
			if (argv[i][j] < 48 && argv[i][j] > 57)
			{
				_puts("Error");
				exit(98);
			}
		}
	}
	s1 = argv[1];
	s2 = argv[2];
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 * len2 + 1;
	mul = malloc(sizeof(int) * len);
	n1 = _atoi(s1);
	n2 = _atoi(s2);
	mul = n1 * n2;
	_puts(mul + '0');
	_puts('\n');
}
