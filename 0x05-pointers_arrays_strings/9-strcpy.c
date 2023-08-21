#include "main.h"

/**
 * _strcpy - copys value of src string to dest
 * @src: will be source string
 * @dest: will be destination string
 * Return: returns our copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
