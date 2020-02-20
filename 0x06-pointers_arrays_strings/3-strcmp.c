#include "holberton.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: -15 if s1 < s2
 *           0 if s1 = s2
 *          15 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, i = 0;

	while (*s1)
	{
		s1len++;
		s1++;
	}

	while (*s2)
	{
		s2len++;
		s2++;
	}

	for (; i <= s1len;)
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}

	if (s1len == s2len && --i == s1len)
		return (0);

	else if (s1 > s2)
		return (15);

	else
		return (-15);
}
