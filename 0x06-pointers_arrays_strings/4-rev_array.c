#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int a;
	int t;

	for (a = 0; a < n--; a++)
	{
		t = a[a];
		a[a] = a[n];
		a[n] = t;
	}
}
