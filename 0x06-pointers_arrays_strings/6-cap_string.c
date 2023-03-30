#include "main.h"

/**
 * cap_string - capitalize each word
 * @str: string to cap
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i != 0)
		{
			if (str[i] == ' '
			|| str[i] == '.'
			|| str[i] == '\n'
			|| str[i] == '\t'
			|| str[i] == ','
			|| str[i] == ';'
			|| str[i] == ':'
			|| str[i] == '{'
			|| str[i] == '?'
			|| str[i] == '}'
			|| str[i] == '['
			|| str[i] == ']'
			|| str[i] == '!'
			|| str[i] == '"'
			|| str[i] == '('
			|| str[i] == ')')
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
			}
		}
		else
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
