#include "main.h"

/**
 * _strncpy - will replace dest with src at n
 * @dest: first string
 * @src: second string
 * @n: will be how many characters to copy
 * Return: returns new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
