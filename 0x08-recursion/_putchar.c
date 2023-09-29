#include "main.h"
#include <unistd.h>
/**
 * _putchar - write  character c to stdout
 * @c:  print character
 *
 * Return: On success 1.
 * On error  errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

