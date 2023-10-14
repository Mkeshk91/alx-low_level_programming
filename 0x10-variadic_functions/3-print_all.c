#include "variadic_functions.h"

#include <stdarg.h>

#include <stdio.h>

/**
 * print_all - print all.
 *
 * @format: list of types of arguments passed t function.
 *
 */

void print_all(const char * const format, ...)
{
	int w = 0;
	char *str, *seps = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", seps, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seps, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seps, va_arg(list, double));
					break;

				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seps, str);
					break;
				default:
					w++;
					continue;
			}
			seps = ", ";
			w++;
		}
	}
	printf("\n");
	va_end(list);
}
