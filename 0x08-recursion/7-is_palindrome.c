#include "holberton.h"

/**
 * is_palindrome - a function that checks if s is palindrome
 * @s: An input string
 * Return: 0 if s is palindrome or 0 if s isn't
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		is_palindrome(s + 1);
	}
	return(check_palindrome(s, len));
}
