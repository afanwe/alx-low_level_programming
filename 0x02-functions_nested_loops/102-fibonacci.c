#include <stdio.h>

/**
 * main - prints first 50 fibonacci sequence numbers
 * Return: Returns 0 upon successful execution
 */

int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int nextnum;
	int i;

	for (i = 0; i < 50; i++)
	{
		nextnum = num1 + num2;
		if (i != 50)
			printf("%li, ", num1);
		else
			printf("%li\n", num1);
		num1 = num2;
		num2 = nextnum;
	}

	return (0);
}
