#include "main.h"

/**
 * times_table - prints times table
 */

void times_table(void)
{
	int c;
	int r;
	int multiple;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			multiple = r * c;
			if (c == 0)
				_putchar(multiple + '0');
			if (c != 0 && multiple < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiple + '0');
			}
			else if (multiple >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
