#include "main.h"

/**
 * puts2 - checks string and prints every other character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;
	int length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
