#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - duplicates string into new string
 * @str: original string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str != NULL)
	{
		len = 0;

		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}

		new_str = (char *) malloc(len + 1 * sizeof(char));

		if (new_str != NULL)
		{
			for (i = 0; str[i]; i++)
			{
				new_str[i] = str[i];
			}
			return (new_str);
		}
		return (NULL);
	}
	return (NULL);
}
