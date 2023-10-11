#include <stdio.h>

#include "function_pointers.h"

/**
 * array_iterator - print every  array element on  new line.
 *
 * @array: array.
 *
 * @size: how many elements t print.
 *
 * @action: pointer t print .
 *
 * Return: void (always).
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int t;

	if (array == NULL || action == NULL)

		return;

	for (t = 0; t < size; t++)

	{
		action(array[t]);
	}
}
