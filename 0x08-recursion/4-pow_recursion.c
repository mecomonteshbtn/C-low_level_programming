#include "holberton.h"

/**
 * _pow_recursion - It returns the value of x raised to the power y.
 * @x: the base
 * @y: the exponent
 * Return: The result of x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
