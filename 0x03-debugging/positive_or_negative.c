#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - will check if a variable
 * @i: will be out parameter veriable to test
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
