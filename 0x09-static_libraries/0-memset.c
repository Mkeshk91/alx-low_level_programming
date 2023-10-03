#include "main.h"
/**
 * _memset - :fill block of memory with  specific value.
 * @a: start address of memory to filled.
 * @b: desired value.
 * @d: bytes number to be changed.
 * Return: change array w new value with n bytes.
 */
char *_memset(char *a, char b, unsigned int d)
{
	int i = 0;


	for (; d > 0; i++)
	{
		a[i] = b;
		d--;
	}
	return (a);
}
