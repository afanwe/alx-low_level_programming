#include <stdio.h>

/**
 * main - this will print all alphabets but q and e
 * Return: returns 0 upon successful execution
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (!(alph == 'q') && !(alph == 'e'))
			putchar(alph);
	}
	putchar('\n');

	return (0);
}
