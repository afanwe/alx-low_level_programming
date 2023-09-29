#include "main.h"

/**
 * print_binary - prints binary representation of n
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int count;
	unsigned long int left_bit;

	count  = sizeof(unsigned long int) * 8;
	left_bit = 1UL << (bit_count - 1);

	while (left_bit > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		left_bit >>= 1;
	}
}
