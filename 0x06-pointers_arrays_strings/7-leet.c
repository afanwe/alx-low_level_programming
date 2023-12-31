#include "main.h"

/**
 * leet - replaces characters in a string with numbers
 * @str: string to replace characters on
 * Return: will return string
 */

char *leet(char *str)
{
	int a, b;

	char alpha[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char numbers[] = { 4, 4, 3, 3, 0, 0, 7, 7, 1, 1 };

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == alpha[b])
			{
				str[a] = numbers[b] + '0';
			}
		}
	}

	return (str);
}
