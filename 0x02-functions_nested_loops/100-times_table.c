#include "holberton.h"
#include <stdio.h>

/**
 * print_times_table - Check Holberton
 * @n: An input integer
 * Description: function that prints the n times table, starting with 0
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					printf("%d", (i * j));
				else if ((i * j) <= 9)
					printf(",   %d", (i * j));
				else if ((i * j) > 9 && (i * j) <= 99)
					printf(",  %d", (i * j));
				else
					printf(", %d", (i * j));
			}
			printf("\n");
		}
	}
}
