#include "holberton.h"

/*
 *This function returns absolute value of a number
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
