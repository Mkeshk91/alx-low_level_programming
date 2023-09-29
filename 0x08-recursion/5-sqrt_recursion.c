#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return natural square root of  number.
 * @n:  calculate the square root of number.
 *
 * Return: square root result
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find  natural sq.
 * square root of number .
 * @n: number to be calculated of  sqaure root.
 * @i: it erator.
 *
 * Return: square root result.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
