#include "main.h"

/**
 * _strncpy - copy  string,
 * @dest: inp value,
 * @src: inp value.
 * @y: inp value.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int y)
{
	int j;

	j = 0;
	while (j < y && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < y)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
