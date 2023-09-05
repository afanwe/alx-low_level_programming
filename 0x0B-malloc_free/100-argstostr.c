#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: 2D array of arguments
 * Return: new array of arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, pos;
	char *str;

	len = 0;
	pos = 0;

	if (ac != 0 || av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				len++;
		}
		len = len + ac;

		str = (char *) malloc(sizeof(char) * len + 1);

		if (str != NULL)
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j]; j++)
				{
					str[pos] = av[i][j];
					pos++;
				}
				if (str[pos] == '\0')
					str[pos++] = '\n';
			}
			return (str);
		}
		return (NULL);
	}
	return (NULL);
}
