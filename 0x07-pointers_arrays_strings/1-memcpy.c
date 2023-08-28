#include "main.h"

/**
 * _memcpy - copys n bytes of src to dest pointer
 * @dest: destination pointer
 * @src: source pointer
 * @n: numbers of bytes to copy
 * Return: returns destination pointer
 */

 char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
