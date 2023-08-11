#include <stdio.h>

/**
 * main - will print letters if the alphabet
 * Return: returns 0 upon successful completion
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
