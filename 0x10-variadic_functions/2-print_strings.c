#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string followed by new line
 * @separator: separator for each string
 * @n: number of strings to print
 * @...: strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;

		va_list args;

		va_start(args, n);

		i = 0;

		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char*);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
		printf("\n");
	}
}
