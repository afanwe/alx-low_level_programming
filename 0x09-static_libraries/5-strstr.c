#include <stdio.h>
#include "main.h"

/**
 * _strstr - searchs for substring need in haystack
 * @haystack: string to search in
 * @needle: string to search for
 * Return: returns substring if found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	for (; *haystack != '\0'; haystack++)
	{
		s1 = haystack;
		s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
