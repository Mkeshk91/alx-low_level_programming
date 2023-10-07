#include "main.h"

#include <stdlib.h>

#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - check if  string contains  non-digit char
 *
 * @r: string to  evaluate.
 * Return: 0 if  non-digit, 1 otherwise.
 *
 */

int is_digit(char *r)
{
	int t = 0;

	while (r[t])
	{
		if (r[t] < '0' || r[t] > '9')
			return (0);
		t++;
	}
	return (1);
}
/**
 * _strlen - returns with  length ofstring.
 * @y: string to evaluate.
 *
 * Return:length of string.
 */

int _strlen(char *y)
{
	int i = 0;

	while (y[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - handle error for main.
 *
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply 2 positive number.
 *
 * @argc: number of argument.
 *
 * @argv: array of argument.
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *g1, *g2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	g1 = argv[1], g2 = argv[2];
	if (argc != 3 || !is_digit(g1) || !is_digit(g2))
		errors();
	len1 = _strlen(g1);
	len2 = _strlen(g2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = g1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(g2) - 1; len2 >= 0; len2--)
		{
			digit2 = g2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
