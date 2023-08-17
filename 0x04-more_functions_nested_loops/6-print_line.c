#include "main.h"

/**
 * print_line - prints _ as per user input
 * @n: will determine how many _ to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
