#include "variadic_functions.h"

/**
 * format_char - char print
 * @separtor: string separator
 * @ar: list of arguments
 * Return: void
 */

void format_char(char *separator, va_list ar)
{
	printf("%s%c", separator, va_arg(ar, int));
}
/**
 * format_int - int print
 * @separtor: string separator
 * @ar: list of arguments
 * Return: void
 */
void format_int(char *separator, va_list ar)
{
	printf("%s%d", separator, va_arg(ar, int));
}
/**
 * format_float - float print
 * @separtor: string separator
 * @ar: list of arguments
 * Return: void
 */
void format_float(char *separator, va_list ar)
{
        printf("%s%f", separator, va_arg(ar, double));
}
/**
 * format_string - string print
 * @separtor: string separator
 * @ar: list of arguments
 * Return: void
 */
void format_string(char *separator, va_list ar)
{
	char *str = va_arg(ar, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - print all formats
 * @format: format choose
 * @...: variable number of args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ar;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"c", format_string},
		{NULL, NULL}
	};
	va_start(ar, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ar);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
