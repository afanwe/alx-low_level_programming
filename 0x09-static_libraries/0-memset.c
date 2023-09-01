#include "main.h"

/**
 * _memset - fills the first n bytes pointed by s with byte b
 * @s: memory pointer
 * @b: our constant
 * @n: numbers if bytes to fill
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
