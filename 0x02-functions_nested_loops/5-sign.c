#include "main.h"
/**
 * print_sign - Checks if number is positive
 * @n: The characher to be checked
 *
 * Return: 1 if character is positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/*return 1 for positive */
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		/* return 0 for zeror*/
		_putchar('0');
		return (0);
	}
	else
	{
		/* return -1 for negative*/
		_putchar('-');
		return (-1);
	}
}
