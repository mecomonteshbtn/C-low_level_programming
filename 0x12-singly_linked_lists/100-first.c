#include <stdio.h>

/**
 * premain - A function that prints a message before main runs
 * Return: Nothing
 */
void __attribute__((constructor)) premain();
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
