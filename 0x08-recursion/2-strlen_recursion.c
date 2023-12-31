#include "main.h"

/**
 * _strlen_recursion - calculates and gives string length
 * @s: string
 * Return: returns lenght of string s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
