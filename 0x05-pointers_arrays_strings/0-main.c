#include "main.h"
#include <stdio.h>

/**
* main - will assign new variable and print current and new value
* Return: returns 0 upon success
*/

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	return (0);
}
