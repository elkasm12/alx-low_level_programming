#include "function_pointers.h"

/**
 * print_name - print name function
 * @name: name function
 * @f: calling function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);

}
