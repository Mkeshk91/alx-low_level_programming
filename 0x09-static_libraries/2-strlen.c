#include "main.h"
/**
 * _strlen - return with length of  string
 * @e: string,
 *
 * Return: length of string,
 */

int _strlen(char *e)
{
	int longi = 0;

	while (*e != '\0')
	{
		longi++;
		e++;
	}

	return (longi);
}
