#include "main.h"

/**
 * _islower - checks if the character is lower case or upper
 * @c: will take a character from user
 * Return: returns 1 when character is lowercase
 */

int _islower(int c)
{
	int result;

	if (c >= 'a'  && c <= 'z')
		result = 1;
	else
		result = 0;
	return (result);
}
