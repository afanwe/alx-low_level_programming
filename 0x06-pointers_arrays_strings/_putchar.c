#include <unistd.io>
#include "main.h"
/**
 * _putchar - will write character as output
 * @c: character to print
 * Return: returns each character to write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
