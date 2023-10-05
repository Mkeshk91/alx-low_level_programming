#include "main.h"
#include <stddef.h>

/**
 * _strchr - start intry point
 * @q: inp,
 * @r: inp,
 *
 * Return:  0 (Success)
 */

char *_strchr(char *q, char r)
{
	int i = 0;

	for (; q[i] >= '\0'; i++)
	{
		if (q[i] == r)
			return (&q[i]);
	}
	return (0);
}
