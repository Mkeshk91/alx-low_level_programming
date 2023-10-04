#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entri;
 *
 * @ac: int in;
 * @av: double pointr array;
 * Return: 0;
 */

char *argstostr(int ac, char **av)
{
	int i, n, u = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[u] = av[i][n];
		u++;
	}
	if (str[u] == '\0')
	{
		str[u++] = '\n';
	}
	}
	return (str);
}
