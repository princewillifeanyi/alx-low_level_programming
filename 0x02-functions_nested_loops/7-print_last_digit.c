#include "main.h"
/**
 * print_last_digit - Prints out last digit.
 * @n: The number to check
 *
 * Return: return last character.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');

	return (last);
}
