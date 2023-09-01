#include "main.h"

/**
 * _isupper - checks if character is in uppercase or not
 * @c: character to check
 * Return: 1 if c is upper and 0 if not
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A'  && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
