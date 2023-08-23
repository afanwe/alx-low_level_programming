#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: returns concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len, new_len;

	dest_len = 0;
	new_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	new_len = dest_len;

	/* Making the length of dest the same as the last index of dest*/
	dest_len -= 1;

	/**
	 * look will start at i = 1 and will loop
	 * as until we reach NULL part of src
	 */

	for (i = 1; src[i - 1] != '\0'; i++)
	{
		dest[dest_len + i] = src[i - 1];
		new_len++;
	}

	dest[new_len] = '\0';

	return (dest);
}
