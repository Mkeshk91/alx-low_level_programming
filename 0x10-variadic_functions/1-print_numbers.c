#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers followed by new line
 * @separator:string to print between numbers
 * @n:number of integers passed to function.
 * @...: variable number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numbers;

	unsigned int indx;

	va_start(numbers, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(numbers, int));

		if (indx != (n - 1) && separator != NULL)

			printf("%s", separator);
	}

	printf("\n");


	va_end(numbers);
}
