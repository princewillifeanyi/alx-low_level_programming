#include "main.h"
/**
 * _isalpha - Checks if a character is letter.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		/*return 1 for letters*/
		return (1);
	}
	else
	{
		/*return 0 for non letter*/
		return (0);
	}
}
