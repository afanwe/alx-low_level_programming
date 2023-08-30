#include "main.h"
#include <stdio.h>

/**
 * calc_sqrt_recursion - finds the natural number of a sqrt
 * @n: number to calcute sqrt of
 * @b: iterator number
 * Return: returns sqrt
 */

int calc_sqrt_recursion(int n, int b)
{
	if ((b * b) > n)
		return (-1);
	else if ((b * b) == n)
		return (b);
	else
		return (calc_sqrt_recursion(n, b + 1));
}

/**
 * _sqrt_recursion - calculates and prints sqrt of n
 * @n: number to calculate sqrt of
 * Return: returns solution
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (calc_sqrt_recursion(n, 0));
}
