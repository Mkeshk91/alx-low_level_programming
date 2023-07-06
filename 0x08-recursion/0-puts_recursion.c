#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s is an input
 * if s is string = success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
