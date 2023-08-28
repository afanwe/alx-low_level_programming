#include "main.h"
#include <stddef.h>

/**
 * _strchr - checks for first occurence of c
 * @s: string to check
 * @c: character to locate
 * Return: returns rest of s where c is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
