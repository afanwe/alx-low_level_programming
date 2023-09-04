#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a point to a 2D array of 0 integers
 * @width: how many element in each row
 * @height: number of arrays
 * Return: returns the new 2D array
 */

int **alloc_grid(int width, int height)
{
	if (!(width <= 0) || !(height <= 0))
	{
		int i;
		int j;

		int **array = (int **) malloc(sizeof(int *) * height);

		for (i = 0; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
	}
	return (NULL);
}
