#include "3-calc.h"
int op_sub(int a, int b);

int op_add(int a, int b);

int op_mul(int a, int b);

int op_mod(int a, int b);

int op_div(int a, int b);

/**
 * op_add - Return with  sum of 2  numbers.
 *
 * @a: first numbr
 * @b:second numbr.
 *
 * Return: sum of a and b.
 *
 */

int op_add(int a, int b)

{

	return (a + b);
}

/**
 * op_sub - Return with  differnce of 2 numbers.
 *
 * @a:first numbr.
 *
 * @b:second numbr.
 *
 * Return: differnce of a- b.
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - Return with product of 2 numbers.
 *
 * @a:  first numbr.
 * @b: second numbr.
 *
 * Return:product of a - b.
 *
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - Return division of 2 numbers.
 *
 * @a: first numbr.
 *
 * @b: second numbr.
 *
 * Return: quotient of a - b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns with remainder of division of 2 numbers
 *
 * @a:first numbr
 *
 * @b: second numbr.
 *
 * Return: remainder of division of a by b
 *
 */

int op_mod(int a, int b)

{
	return (a % b);
}
