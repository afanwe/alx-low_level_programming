#include <stdio.h>

/**
 * main - prints number 0-9
 * Return: returns 0 upon successful run
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	putchar('\n');

	return (0);
}
