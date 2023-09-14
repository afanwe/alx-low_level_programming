#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates and returns the sum af arguments
 * @n: number of arguments
 * @...: arguments to sum up
 * Return: returns the sum if n is not 0
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		int sum;
		unsigned int i;

		va_list args;

		va_start(args, n);

		sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);

		return (sum);
	}
	return (0);
}
