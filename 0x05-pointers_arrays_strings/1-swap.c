#include "main.h"

/**
 * swap_int - swaps the values a and b;
 * @a: first value to swap
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
