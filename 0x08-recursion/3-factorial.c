#include "main.h"

/**
 * factorial - return factorial of  number
 * @n: number returned with factorial from
 *
 * Return:  n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
