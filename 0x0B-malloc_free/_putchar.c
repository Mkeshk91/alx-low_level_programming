#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c is written to stdout
 * @c: Print this charcter
 *
 * Return: Success 1.
 * Error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
