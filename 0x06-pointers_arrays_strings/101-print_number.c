#include "main.h"

/**
 * print_number - checks and prints number
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		if (num / 10)
			print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
