#include "main.h"

/**
 * _puts - print string, follow by  new line, to stdout;
 * @str: string t print;
 *
 */

void _puts(char *str)

{
	while (*str != '\0')

	{
		_putchar(*str++);
	}
		_putchar('\n');
}
