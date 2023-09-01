#include "main.h"

/**
 * _isdigit - checks if enter value is a number or not
 * @c: will be out character passed into the function
 * Return: returns 1 if c is a number and 0 if not
 */

int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
		result = 1;
	else
		result = 0;

	return (result);
}
