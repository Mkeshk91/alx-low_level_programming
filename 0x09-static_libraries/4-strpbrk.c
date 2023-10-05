#include "main.h"
/**
 * _strpbrk - intry point;
 *
 * @o: input;
 * @accept: input;
 * Return: 0 (Success);
 */

char *_strpbrk(char *o, char *accept)

{
	int m;

	while (*o)

	{
		for (m = 0; accept[m]; m++)

		{
		if (*o == accept[m])
		return (o);
		}
	o++;
	}

return ('\0');
}
