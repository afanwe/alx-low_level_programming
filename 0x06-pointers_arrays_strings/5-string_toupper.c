#include "main.h"

/**
 * string_toupper - converts entire string to uppercase
 * @str: string to manipulate
 * Return: returns new string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
