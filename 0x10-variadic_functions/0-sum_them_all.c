#include <stdarg.h>

#include "variadic_functions.h"


/**
 * sum_them_all - Return sum of  paramters.
 * @n:  NO. of paramters passed to function.
 * @...: variable NO  of paramters to calculate sum.
 * Return: If n == 0 - 0 or - sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;

	unsigned int m, sum = 0;

	va_start(ar, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ar, int);

	va_end(ar);

	return (sum);
}
