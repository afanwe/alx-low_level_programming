#include <stdio.h>

/**
 * main - prints sum of multiples of 3 and 5
 * Return: returns 0 upon successful execution
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0 )
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
