#include "main.h"
/**
 * _strspn - intry point;
 * @d: inp.
 * @accept: inp.
 *
 * Return: 0 (Success);
 */

unsigned int _strspn(char *d, char *accept)

{
	unsigned int n = 0;
	int p;

	while (*d)

	{
		for (p = 0; accept[p]; p++)
		{
			if (*d == accept[p])
			{
				n++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (n);
		}
		d++;
	}
	return (n);
}
