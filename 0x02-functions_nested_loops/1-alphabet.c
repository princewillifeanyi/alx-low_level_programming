#include "main.h"

/*
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * return always 0
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');

}
