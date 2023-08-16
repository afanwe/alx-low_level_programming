#include "main.h"

/**
 * print_times_table - prints multiple table
 * @n: parameter for function
 */


void print_times_table(int n)
{
	int r, c, multi;

	if (!(n < 0) && !(n > 15))
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				multi = r * c;

				if (c == 0)
					_putchar(multi + '0');
				if (c != 0 && multi < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multi + '0');
				}
				else if (multi >= 10 && multi < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multi / 10) + '0');
					_putchar((multi % 10) + '0');
				}
				else if (multi > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multi / 100) + '0');
					_putchar(((multi / 10) % 10) + '0');
					_putchar((multi % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
