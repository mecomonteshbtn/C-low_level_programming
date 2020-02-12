#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
	}
	printf("%ld\n", sum);

	return (0);
}
