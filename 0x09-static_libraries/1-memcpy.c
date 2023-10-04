#include "main.h"
/**
 *_memcpy - function copies memory area;
 *@dest: memory where's store;
 *@src: memory where's copied;
 *@n: No of bytes;
 *Return: copied memory with n byte change.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int u = 0;
	int t = n;

	for (; u < t; u++)
	{
		dest[u] = src[u];
		n--;
	}
	return (dest);
}
