#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - calls function in pointer f to print name on screen
 * @name: name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
