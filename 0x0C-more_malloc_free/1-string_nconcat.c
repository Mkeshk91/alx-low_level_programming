#include <stdlib.h>

#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of string to another string.
 *
 * @s1: string to append to.
 *
 * @s2: string to concatenate from.
 *
 * @n: NO of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, o = 0, lena = 0, lenb = 0;

	while (s1 && s1[lena])
		lena++;
	while (s2 && s2[lenb])
		lenb++;

	if (n < lenb)
		s = malloc(sizeof(char) * (lena + n + 1));
	else
		s = malloc(sizeof(char) * (lena + lenb + 1));

	if (!s)
		return (NULL);

	while (i < lena)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lenb && i < (lena + n))
		s[i++] = s2[o++];

	while (n >= lenb && i < (lena + lenb))
		s[i++] = s2[o++];

	s[i] = '\0';

	return (s);
}
