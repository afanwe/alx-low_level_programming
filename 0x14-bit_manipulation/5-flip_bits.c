#include "main.h"

/**
 * flip_bits - counts how many bits to change to move to the next
 * @n: first digit
 * @m: second digit
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int counter;

	result = n ^ m;
	counter = 0;

	while (result > 0)
	{
		counter = counter + result & 1;
		result >>= 1;
	}

	return (counter);
}
