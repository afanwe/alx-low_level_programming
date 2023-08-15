#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets a-z
 * variable will contain each alphabet
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
