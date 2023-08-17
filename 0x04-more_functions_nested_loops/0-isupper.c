#include "main.h"

/**
 * _isupper - checks if character is upper case or not
 * @c: character which will be checked
 * Return: returns 1 is c is upper case
 */

int _isupper(char c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;

	return (result);
}
