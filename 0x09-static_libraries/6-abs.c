#include "main.h"

/**
 * _abs - converts number to absolute value
 * @n: parameter for our number
 * Return: returns alsolute value
 */

int _abs(int n)
{
	int abs;

	if (n > 0)
		abs = n;
	else
		abs = n * -1;
	return (abs);
}
