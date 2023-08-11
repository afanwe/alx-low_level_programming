#include <stdio.h>

/**
 * main - will print all values of base-16
 * Return: returns 0 upon successful completion
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
