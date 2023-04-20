#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: integer separator
 * @n: munber of arguments
 * @...: argument to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);

}

