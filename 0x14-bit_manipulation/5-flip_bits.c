#include "main.h"

/**
 * flip_bits - counts how many bits to change to move to the next
 * @n: first digit
 * @m: second digit
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, current_bit;
	int i, counter;

	counter = 0;
	result = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_bit = result >> i;

		if (current_bit & 1)
			counter++;
	}

	return (counter);
}
