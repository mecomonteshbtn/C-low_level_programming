#include <stdio.h>

/* Using constructors in C */
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - A constructor function that prints a message
 * before main runs
 * Return: Nothing
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
