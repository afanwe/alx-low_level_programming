#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - creates a new pointer for b
 * @b: size of pointer
 * Return: returns new pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
