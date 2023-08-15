#include "main.h"

/**
 * main - This print text
 * Return: returnsx 0 upon successful execution
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
