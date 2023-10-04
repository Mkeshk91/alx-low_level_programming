#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates t  new memory space location.
 * @str: char;
 * Return: 0.
 */

char *_strdup(char *str)
{
	char *mai;
	int i, y = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	mai = malloc(sizeof(char) * (i + 1));

	if (mai == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		mai[y] = str[y];

	return (mai);
}
