#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to look for
 * @index: index of the bit to find
 * Return: returns the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (!(index > 63))
	{
		bit_value = (n >> index) & 1;
	}
	else
	{
		return (-1);
	}

	return (bit_value);
}
