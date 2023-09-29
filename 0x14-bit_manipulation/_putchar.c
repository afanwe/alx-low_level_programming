#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints and returns characters
 * @c : character to write to screen
 * Return: returns each character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
