#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: returns result of search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	count = 0;

	while (count < size)
	{
		if (cmp(array[count]))
		{
			return (count);
		}
	}
	return (-1);
}
