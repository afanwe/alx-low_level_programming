#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - creates a pointer of integers from min to max
 * @min: minimun value to be stored
 * @max: maximum value to be stored
 * Return: new pointer
 */

int *array_range(int min, int max)
{
	int *numbers;
	int i;

	i = 0;

	if (min > max)
		return (NULL);

	numbers = malloc(sizeof(int) * max + 1);

	if (numbers != NULL)
	{
		 while (min != max)
		 {
			 numbers[i] = min;
			 min++;
			 i++;
		 }
		 numbers[i] = max;
		 return (numbers);
	}
	return (NULL);
}
