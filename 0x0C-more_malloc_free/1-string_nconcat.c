#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str, *starts1, *starts2;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	starts1 = s1;
	starts2 = s2;

	if (s1 == NULL)
		s1 = "";

	while (*s1)
		lens1++, s1++;
	s1 = starts1;

	if (s2 == NULL)
		s2 = "";

	while (*s2)
		lens2++, s2++;
	s2 = starts2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = new_str;

	if (new_str == NULL)
		return (NULL);

	if (n >= lens2)
		n = lens2;

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (starts1);
}
