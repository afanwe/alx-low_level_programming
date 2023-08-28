#include "main.h"
#include <stdio.h>

/**
 * main - checks and executes code
 * Return: 0 upon success
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	return (0);
}
