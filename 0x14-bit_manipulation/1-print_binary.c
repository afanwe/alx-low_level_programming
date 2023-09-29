#include "main.h"

/**
 * print_binary - prints binary representation of n
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int left_bit;

	count  = sizeof(unsigned long int) * 8;

	for (i = count - 1; i >= 0; i--)
	{
		left_bit = 1UL << i;

		if (n & left_bit)
			_putchar('1');
		else
			_putchar('0');

	}
}
