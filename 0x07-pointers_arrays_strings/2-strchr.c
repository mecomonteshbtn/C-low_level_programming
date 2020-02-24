#include "holberton.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (c != *s)
	{
		s++;
	}
	return (s);
}
