#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -iterates through elements given array
 * @array: to print elements of
 * @size: size of array
 * @action: pointer to function to give elements of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;

	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}
