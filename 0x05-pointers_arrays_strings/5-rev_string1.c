#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}


/**
 * rev_string - reverses string in place, without printing it
 *
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
  int i, len;
  char a, z;

  len = _strlen(s) - 1;
  i = 0;
  while (i < len)
    {
      a = s[i];
      z = s[len];
      s[i++] = z;
      s[len--] = a;
    }
}
