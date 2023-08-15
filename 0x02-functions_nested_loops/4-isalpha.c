#include "main.h"

/**
 * _isalpha - check if the character is an alphabet or not
 * @c: is our parameter for the function
 * Return: returns 1 if c is an alphabet
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		result = 1;
	else
		result = 0;

	return (result);
}
