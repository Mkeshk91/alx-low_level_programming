#include "main.h"
/**
 * _atoi - convert string into integer.
 *
 * @d: the string to use.
 *Return: integer;
 */


int _atoi(char *d)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(d[i] <= '9' && d[i] >= '0') && d[i] != '\0')
	{
		if (d[i] == '-')
			sign *= -1;
		i++;
	}
	while (d[i] <= '9' && (d[i] >= '0' && sd[i] != '\0'))
	{
		res = (res * 10) + (d[i] - '0');
		i++;
	}

	res *= sign;
	return (res);
}
