#include "main.h"

/**
 * print_square - prints square pattern
 * @size: will determine size of square
 */

void print_square(int size)
{
	int i;
	int j;
	int n;

	n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
}

