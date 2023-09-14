#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all data types
 * @format: aurgments passed into function
 * @...: all the arguments passed
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char *str;
	char *separator = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				default:
					index++;
					continue;
			}
			separator = ", ";
			index++;
		}
	}
	va_end(args);
	printf("\n");
}
