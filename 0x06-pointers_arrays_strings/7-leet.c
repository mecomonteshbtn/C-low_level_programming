#include "holberton.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';

		if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';

		if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';

		if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';

		if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';

		i++;
	}

	return (s);
}
