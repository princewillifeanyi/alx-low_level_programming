#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		/*return 1 for lowercase*/
		return (1);
	}
	else
	{
		/*return 0 for for upper*/
		return (0);
	}
}
