#include "holberton.h"

/**
 * print_alphabet_x10 function uses _putchar function to print
 * alphabet in lowercase 10 times
 */
int _islower(int c)
{
	char i;
	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			islower = 1;
	}

	return (islower);
}
