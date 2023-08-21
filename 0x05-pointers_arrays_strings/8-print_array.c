#include <stdio.h>
#include "main.h"

/**
 * print_array - will print all elements of array
 * @a: will store the arrary
 * @n: will store size of the arrary
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
