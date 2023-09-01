#include "main.h"
/**
 * _strncat - concatenates n characters of src to dest
 * @dest: first string
 * @src: second string
 * @n: numbers of characters to append
 * Return: returns new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
