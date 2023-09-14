#include "stdio.h"
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: will separate each number
 * @n: number of arguments
 * @...: arguments to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;

		va_list args;

		va_start(args, n);

		i = 0;

		for (i = 0; i < n; i++)
		{
			if (separator != NULL)
			{
				if (i != (n - 1))
					printf("%d%s", va_arg(args, int), separator);
				else
					printf("%d", va_arg(args, int));
			}
			else
				printf("%d", va_arg(args, int));
		}
		va_end(args);

		printf("\n");
}
