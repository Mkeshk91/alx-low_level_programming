#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, -1 = false.
 *
 * @array: arry.
 *
 * @size: size of element in array.
 *
 * @cmp: pointer to function  of 1 of  three in main.
 *
 * Return: 0 sucess.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)

		return (-1);

	for (m = 0; m < size; m++)
	{

		if (cmp(array[m]))

			return(m);
	}

	return (-1);
}
