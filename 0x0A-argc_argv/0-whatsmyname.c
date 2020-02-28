#include "holberton.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/**
 * if (argc == 1)
 *	printf("%s\n", argv[0]);
 *	else if (argc > 1)
 *	{
 *		argv[0] = argv[4];
 *		printf("%s\n", argv[0]);
 *	}
 */
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
