#include "main.h"
#include <stdio.h>

/**
 * main - check and executes code
 * Return: 0 upon successful execution
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
