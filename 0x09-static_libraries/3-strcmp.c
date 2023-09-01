#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns 0 if the string are the same
 */

int _strcmp(char *s1, char *s2)
{
	int i, s1_len, s2_len;

	s1_len = 0;
	s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}

	i = 0;
	while (i < s1_len && i < s2_len)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (0);
}
