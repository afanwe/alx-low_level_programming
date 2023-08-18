#include <stdio.h>

/**
 * main - checks code for errors and executes
 * Return: 0 if code runs without errors
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
		{
			if (i == 1)
				printf("%d", i);
			else
				printf(" %d", i);
		}
		else if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf(" Fizz");
		}
		else if ((i % 3) != 0 && (i % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" FizzBuzz");
		}
	}
	putchar('\n');

	return (0);
}
