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
	int length;

	length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[length + 1] = '\0';
	return (dest);
}
