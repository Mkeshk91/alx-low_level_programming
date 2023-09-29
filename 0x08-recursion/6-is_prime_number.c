#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number -  if  integer is prime number or no.
 * @n:  evaluated NO.
 * Return: 1 if n  prime number, 0 if no.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if  number is a prime recursively.
 * @n: evaluated Number.
 * @i: it erator/
 *
 * Return: 1 if n is prime.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
