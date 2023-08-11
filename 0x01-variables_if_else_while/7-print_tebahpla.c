#include <stdio.h>

/**
 * main - will print alphabets in reverse
 * Return: returns 0 upon successful completion
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}
