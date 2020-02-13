#include "holberton.h"

/**
   * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0
 */
void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
