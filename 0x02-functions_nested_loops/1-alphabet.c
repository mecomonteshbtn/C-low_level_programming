#include "holberton.h"

/**
 * print_alphabet function uses _putchar function to print
 * alphabet in lowercase
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
