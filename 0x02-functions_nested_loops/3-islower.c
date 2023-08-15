#include "main.h"

/**
 * _islower - checks if the character is lower case or upper
 * @c: will take a character from user
 * Return: returns 1 when character is lowercase
 */

int _islower(int c)
{
	int result;

	if (c > 96 && c < 123)
		result = 1;
	else if (c < 91 && c > 64)
		result = 0;
	return (result);
}
