#include "main.h"

/**
 * print_last_digit - checks n and prints last digit of n
 * @n: parameter of function
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = n % 10;
		_putchar(result + '0');
	}
	else
	{
		result = (n * -1) % 10;
		_putchar(result + '0');
	}

	return (result);
}
