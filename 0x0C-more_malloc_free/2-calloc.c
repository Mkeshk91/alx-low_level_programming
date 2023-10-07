#include <stdlib.h>

#include "main.h"

/**
 * *_memset - fill a  memory with constant byte.
 *
 * @s: memory area to fill.
 *
 * @b: char to be copied
 *
 * @n: NO  of times to copy b
 * Return: pointer to memory s area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}

	return (s);
}

/**
 * *_calloc - allocate memory for array
 * @num: number of elements in array.
 *
 * @sze: size of each elements.
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int num, unsigned int sze)
{
	char *ptr;

	if (num == 0 || sze == 0)
		return (NULL);

	ptr = malloc(sze * num);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, num * sze);

	return (ptr);
}
