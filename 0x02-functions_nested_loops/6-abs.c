#include "holberton.h"

/**
 *_abs - Check Holberton
 * @r: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
