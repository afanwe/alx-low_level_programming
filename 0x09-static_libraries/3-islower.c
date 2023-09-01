#include "main.h"

/**
 * _islower - checks if c is lower or not
 * @c: character to check
 * Return: 1 is lower case and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a'  && c <= 'z')
		return (1);
	else
		return (0);
}
