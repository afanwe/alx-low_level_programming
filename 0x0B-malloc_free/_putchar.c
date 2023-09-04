#include <unistd.h>

/**
 * _putchar - prints character c
 * @c: character to print
 * Return: returns each character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
