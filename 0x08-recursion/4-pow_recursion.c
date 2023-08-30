#include "main.h"

/**
 * _pow_recursion - calculates power y of base x
 * @x: base
 * @y: power of
 * Return: returns results
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
