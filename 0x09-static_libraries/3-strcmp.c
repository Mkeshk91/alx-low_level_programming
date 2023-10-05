#include "main.h"
/**
 * _strcmp - compare string value;
 *
 * @a1: input value
 * @a2: input value
 *
 * Return: a1[i] - a2[i];
 *
 */

int _strcmp(char *a1, char *a2)

{
	int i;

	i = 0;
	while (a1[i] != '\0' && a2[i] != '\0')
	{
		if (a1[i] != a2[i])

		{
			return (a1[i] - a2[i]);
		}
	i++;
	}
	return (0);
}
