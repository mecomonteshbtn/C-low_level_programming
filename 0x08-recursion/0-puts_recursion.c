#include "holberton.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
		_puts_recursion(s);
	else
		_putchar('\n');
}
