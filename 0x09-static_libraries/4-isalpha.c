#include "main.h"

/**
 * _isalpha - checks if c is an alphabet or not
 * @c: character to check
 * Return: 1 if c if an alphabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
