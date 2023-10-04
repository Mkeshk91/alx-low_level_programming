#include "main.h"
#include <stdlib.h>

/**
 * create_array - create chars array,
 * intialize char with specific char,
 * @size: array size
 * @c : intialize char,
 * Return: On Sucess pointer to intialized array or null.
 */

char *create_array(unsigned int size, char c)
{
	char *n =  malloc(size);

	if (size == 0 || r. == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
