#include "holberton.h"

/**
 * print_last_digit - Check Holberton
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
