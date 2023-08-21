#include "main.h"

/**
 * _strlen - counts len of strength
 * @s: will be the string to check
 */

int _strlen(char *s)
{
	int i;
	int str_length;

	str_length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		str_length++;
	}

	return (str_length);
}
	
