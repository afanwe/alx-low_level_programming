#include "main.h"
#include <stdio.h>

/**
 * _string_to_int - converts string to integer
 * @str: string to convert
 * Return: returns integer
 */

int _string_to_int(char *str)
{
	int i, j, n, length, k, num;

	i = 0;
	j = 0;
	k = 0;
	length = 0;
	n = 0;
	num = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	while (i < length && k == 0)
	{
		if (str[i] == '-')
			++j;

		if (str[i] >= '0' && str[i] <= '9')
		{
			num = str[i] - '0';
			if (j % 2)
			{
				num = -num;
			}
			n = n * 10 + num;
			k = 1;

			if (str[i + 1] < '0' || str[i + 1] > '9')
			{
				break;
			}
			k = 0;
		}
		i++;
	}

	if (k == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - checks code and multiplies two numbers
 * @argc: number of arguments
 * @argv: names of arguments as an array
 * Return: 0 upon successful execution
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	printf("%d\n", _string_to_int(argv[1]) * _string_to_int(argv[2]));
	return (0);
}
