#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns point to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *new_str;

	if (s1 != NULL || s2 != NULL)
	{
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

		new_str = (char *) malloc(sizeof(char) * (s2_len + s1_len + 1));

		if (new_str != NULL)
		{
			for (i = 0; i < s1_len; i++)
			{
				new_str[i] = s1[i];
			}

			j = 0;

			while (s2[j] != '\0')
			{
				new_str[i] = s2[j];
				j++;
				i++;
			}
			new_str[i] = '\0';
			return (new_str);
		}
		return (NULL);
	}
	return (NULL);
}
