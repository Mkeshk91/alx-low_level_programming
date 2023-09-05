#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character i to stdout
 * @i:  print character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char i)
{
        return (write(1, &i, 2));
}
