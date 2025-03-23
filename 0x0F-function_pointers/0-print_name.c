#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: name.
 * @f: pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
