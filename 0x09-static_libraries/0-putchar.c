#include <unistd.h>
/**
 * _putchar - write character c t stdout
 * @c:character t print.
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
