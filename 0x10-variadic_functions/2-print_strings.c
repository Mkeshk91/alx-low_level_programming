
#include "variadic_functions.h"

#include <stdio.h>

#include <stdarg.h>
/**
 * print_strings - Print strings, followed by new line
 *
 * @separator: string to print between strings
 *
 * @n:Number of strings passed to function.
 *
 * @...: variable number of strings to print
 * Des: If separator is NULL, not printed.
 *              If one of strings if NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list string;

	char *str;

	unsigned int indx;

	va_start(string, n);

	for (indx = 0; indx < n; indx++)

	{
		str = va_arg(string, char *);

		if (str == NULL)

			printf("(nil)");
		else
			printf("%s", str);

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
