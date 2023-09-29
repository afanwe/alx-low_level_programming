#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of ndigit to convert
 * Return: returns int value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	char ch;
	unsigned int value;

	value = 0;

	if (b != NULL)
	{
		while (*b != '\0')
		{
			ch = *b;

			if (ch == '1' || ch == '0')
				value = (value << 1) | (ch - '0');
			else
				return (0);
			b++;
		}
	}
	else
		return (0);
	return (value);
}
