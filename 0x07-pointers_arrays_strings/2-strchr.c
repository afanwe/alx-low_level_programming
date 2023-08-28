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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
