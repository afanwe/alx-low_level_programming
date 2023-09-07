#include "main.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for the array
 * @nmemb: amount of elements to be stored
 * @size: size of each element
 * Return: returns new pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p  = malloc(size * nmemb);

	if (p != NULL)
	{
		while (i < (nmemb * size))
		{
			p[i] = 0;
		i++;
		}
		return (p);
	}
	return (NULL);
}
