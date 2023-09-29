#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if string is a palindrome ot not.
 * @s: reversed string.
 *
 *
 * Return: 1 (sucess)
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return with  length of string.
 * @s:  calculated String  the length of
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check the characters recursively for palindrome.
 * @s: string to checks .
 * @i: iterator..
 * @len: length of a string.
 *
 * Return: 1 (sucess)
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
