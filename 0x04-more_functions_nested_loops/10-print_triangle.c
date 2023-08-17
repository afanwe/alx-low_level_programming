#include "main.h"

/**
 * print_triangle - prints triangle # pattern
 * @size: variable to determine size of triangle
 */

void print_triangle(int size)
{
	int i;
	int h;
	int j;
	int n;

	n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j < n; j++)
			{
				_putchar(' ');
			}

			for (h = 1; h <= i; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
