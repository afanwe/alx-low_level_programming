#include "main.h"

/**
 * _puts - prints str one element at a time
 * @str: will be our string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
