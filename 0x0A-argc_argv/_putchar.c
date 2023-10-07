#include <stdio.h>
#include "main.h"

/**
 * _putchar - write character y to stdout
 * @y:Ther character to print
 *Return: On success 1;
 * On error, -1 errno is set appropriately;
 */


int _putchar(char c)
{

return (write(1, &c, 1));
}
