#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initialize c
 * @size: size of array
 * @c: character to initialize
 * Return: returns array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *my_array;

	my_array = (char *) malloc(size * sizeof(char));

	if (size == 0 || my_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(my_array + i) = c;
	}

	return (my_array);
}
