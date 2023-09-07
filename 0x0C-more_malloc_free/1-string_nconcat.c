#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len, s2_len;
	char *str;

	s2_len = 0;
	s1_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s1[i] != '\0'; i++)
		s2_len++;

	if (n > s2_len)
		str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		str = malloc(sizeof(char) * (s1_len + n + 1));

	if (str != NULL)
	{
		for (i = 0; i < s1_len; i++)
			str[i] = s1[i];
		i = 0;

		while (i < n && s2[i] != '\0')
		{
			str[s1_len] = s2[i];
			s1_len++;
			i++;
		}
		str[s1_len] = '\0';
		return (str);
	}
	return (NULL);
}
