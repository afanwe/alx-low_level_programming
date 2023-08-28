#include "main.h"
#include <stdio.h>

/**
 * _strchr - checks for first occurence of c
 * @s: string to check
 * @c: character to locate
 * Return: returns rest of s where c is found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
