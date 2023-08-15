#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes each character passed into the function
 * @character: this is the character to be printed
 * Return: returns each character passed as parameter
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
