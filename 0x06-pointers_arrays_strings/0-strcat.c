#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int m, d;

	m = 0;
	while (dest[m])
		m++;
	for (d = 0; src[d] ; d++)
		dest[m++] = src[d];
	return (dest);
}
