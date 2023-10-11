#include <stdlib.h>

#include "3-calc.h"

/**
 * get_op_func - Selects correct function t operform the operation.
 *
 * @s:operator passed as argument
 *Return:pointer to function corresponding
 *         to operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"-", op_sub},

		{"+", op_add},

		{"/", op_div},

		{"*", op_mul},

		{"%", op_mod},

		{NULL, NULL},
	};

	int w = 0;

	while (ops[w].op != NULL && *(ops[w].op) != *s)
		w++;

	return (ops[w].f);
}
