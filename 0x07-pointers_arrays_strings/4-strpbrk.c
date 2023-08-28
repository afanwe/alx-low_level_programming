#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - checks for first occurence of s
 * @s: string to check on
 * @accept: character to check for
 * Return: returns remaining string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp;

	if (s == NULL || accept == NULL)
	{
		return  (NULL);
	}

	for (i = 0; s[i] >= '\0'; i++)
	{
		tmp = accept;

		for (j = 0; tmp[j] >= '\0'; j++)
		{
			if (s[i] == tmp[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
