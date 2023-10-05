#include "main.h"

/**
 * _isalpha - check fr alphabetic character;
 *
 * @c: character to be checked;
 *
 * Return: 1 if c a letter, 0 or
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
