#include "main.h"

/**
 * puts_half - will read and bring second part of string
 * @str: will hold our string
 */


void puts_half(char *str)
{
	int i;
	int length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if ((length % 2) != 0)
	{
		length = length / 2;
		for (i = length + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
