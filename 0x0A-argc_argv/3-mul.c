#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to integer.
 * @s: string to  convert.
 * Return: int converted from  string
 *
 */
int _atoi(char *s)
{
	int i, u, n, len, m, digit;

	i = 0;
	u = 0;
	n = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++u;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (u % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}

/**
 * main - multiply 2 numbers.
 *
 * @argc: NO. of arguments
 * @argv: array of arguments.
 * Return: 0 (Success),    1 (Error).
 */

int main(int argc, char *argv[])
{
	int res, nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	res = nm1 * nm2;

	printf("%d\n", res);

	return (0);
}


