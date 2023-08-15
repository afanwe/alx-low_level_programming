#include "main.h"

/**
 * print_sign - checks if n is less, greater than or equals to 0
 * @n: will be our testing character
 * Returns: returns 1 if greater, 0 if 0, -1 if less than 0
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}

	return (result);
}
