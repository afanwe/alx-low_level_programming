#include "main.h"
#include <stdio.h>

/**
 * main - will have out character to test and call function
 * Return: 0 if runs with no error
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
