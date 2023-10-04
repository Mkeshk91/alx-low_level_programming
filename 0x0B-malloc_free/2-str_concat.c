#include "main.h"
#include <stdlib.h>
/**
 * str_concat- find length of string;
 *@a1: input  1 to concat,
 *@a2: input 2 to concat,
 * Return: concat of s1 & s2,
 **/

char *str_concat(char *a1, char *a2)
{
	char *conct;
	int i, ti;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	i = ti = 0;
	while (a1[i] != '\0')
		i++;
	while (a2[ti] != '\0')
		ti++;
	conct = malloc(sizeof(char) * (i + ti + 1));

	if (conct == NULL)
		return (NULL);
	i = ti = 0;
	while (a1[i] != '\0')
	{
		conct[i] = a1[i];
		i++;
	}

	while (a2[ti] != '\0')
	{
		conct[i] = a2[ti];
		i++, ti++;
	}
	conct[i] = '\0';
	return (conct);
}
