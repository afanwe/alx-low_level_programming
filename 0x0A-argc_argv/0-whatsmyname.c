#include "main.h"

/**
 * main - checks and executes code
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, len;

	len = 0;

	for (i = 0; argv[argc - 1][i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
