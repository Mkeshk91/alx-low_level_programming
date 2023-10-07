#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocate memory  using malloc .
 * @a: NO of bytes to allocate
 *  Return: a pointer to allocated   memory
 *
 */

void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
