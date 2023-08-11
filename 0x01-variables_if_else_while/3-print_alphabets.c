#include <stdio.h>

/**
 * main - prints letters of the alphabet in lower and uppercase
 * Return: returns 0 upon success execution
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
