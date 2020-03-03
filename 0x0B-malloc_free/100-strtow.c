#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char **strtow(char *str)
{
	char *new_str, *starts1, *starts2;
	int i = 0, len = 0, flag = 1;

	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			flag = 1;
		else if (flag)
			len++;
		if (len > 0 && (*str == ' ' || *str == '\t')
				break;
		i++;
	}

	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = new_str;
	if (new_str != NULL)
	{
		for (; i < (lens1 + lens2); i++)
		{
			if (i < lens1)
			{
				new_str[i] = *s1;
				s1++;
			}
			else
			{
				new_str[i] = *s2;
				s2++;
			}
		}
		new_str[i] = '\0';
		return (starts1);
	}
	else
		return (NULL);
}
