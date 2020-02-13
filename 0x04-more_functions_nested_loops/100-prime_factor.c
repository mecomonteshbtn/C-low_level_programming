#include <stdio.h>
int isprime(long int n);

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long int i = 2, max_prime;

	for (; i <= 612852475143; i++)
	{
		if (612852475143 % i == 0 && isprime(i) == 1)
			max_prime = i;
	}
	printf("%ld\n", max_prime);

	return (0);
}

/**
 * isprime - a function to find prime values
 * @n: An input integer
 * Return: 1 if n is prime or 0 if n is not a prime value
 */
int isprime(long int n)
{
	int prime = 1, cont = 0;
	long int k = 2;

	for (; k < n; k++)
	{
		if (n % k == 0)
			cont++;
	}

	if (cont != 0)
		prime = 0;

	return (prime);
}
