#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: input to test
 *
 * Return: 1 if c is upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
