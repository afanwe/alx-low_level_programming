#include "main.h"

/**
 * _atoi - function
 * @s: string to check
 * Return: returns an integer
 */

int _atoi(char *s)
{
	int symb;
	int i;

	i = 0;
	symb = 1;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			symb*= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= symb;
	return (res);
}
