#include "main.h"

/**
 * rev_string - checks and reverses string s
 * @s: will be our string to reverse
 */

void rev_string(char *s)
{
	int i;
	int length;
	int tmp;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
