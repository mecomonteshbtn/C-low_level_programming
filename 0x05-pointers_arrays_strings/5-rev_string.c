#include "holberton.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i;
	char rev[13];

	while (s[len] != '\0')
		len++;

	for (i = len; i >= 0; i--)
		rev[len - i] = *s[i];

	s = rev;
}
