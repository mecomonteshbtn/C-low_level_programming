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
	int s1len = 0, s2len = 0;
	char *s1start = s1, *s2start = s2;

	while (*s1)
	{
		s1len++;
		s1++;
	}

	s1 = s1start;

	while (*s2)
	{
		s2len++;
		s2++;
	}

	s2 = s2start;

	if (s1 > s2)
		return (15);

	else if (s1 < s2)
		return (-15);

	while (*s1)
	{
		if (*s1 < *s2)
			return (-15);
		if (*s1 > *s2)
			return (15);
		s1++;
		s2++;
	}
	return (0);
}
