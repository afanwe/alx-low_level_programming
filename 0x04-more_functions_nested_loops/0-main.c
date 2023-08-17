#include "main.h"
#include <stdio.h>

/**
 * main - checks character and returns result
 * Return: 0 if runs with no errors
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
