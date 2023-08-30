#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates and returns factioral
 * @n: number to calculate factorial of
 * Return: returns factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
