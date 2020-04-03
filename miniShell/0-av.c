#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *av[])
{
	while (*av)
		printf("%s\n", *av++);
	return (0);
}
