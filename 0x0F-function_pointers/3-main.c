#include <stdio.h>

#include <stdlib.h>
#include "3-calc.h"

#include "function_pointers.h"

/**
 * main - Print result of simple operation
 *
 * @argc: Number of argument supplied to program
 *
 * @argv:array of pointer t arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])

{
	int number1, number2;

	char *out;

	if (argc != 4)

	{
		printf("Error\n");
		exit(98);
	}


	number1 = atoi(argv[1]);

	out = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(out) == NULL || out[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*out == '/' && number2 == 0) ||
	    (*out == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(out)(number1, number2));
	return (0);
}
