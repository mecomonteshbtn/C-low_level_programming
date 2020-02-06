#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 90; d++)
	{
		for ()
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
		}
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
