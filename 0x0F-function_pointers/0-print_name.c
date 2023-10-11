#include <stdio.h>

#include "function_pointers.h"


/**
 * print_name - print name by  pointer to function.
 *
 * @name: string t add.
 *
 * @f: pointer t function.
 *
 * Return: - .
 *
 **/

void print_name(char *name, void (*f)(char *));

{
	if (name == NULL || f == NULL)

		return;


	f(name);
}
