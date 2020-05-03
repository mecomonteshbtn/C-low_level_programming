#include <stdio.h>

char is_palindrome(unsigned int num);
/**
 * main - entry point to find palindrome program
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int d1, d2, temp, max;

	max = 0;
	for (d1 = 100; d1 <= 999; d1++)
	{
		for (d2 = 100; d2 <= 999; d2++)
		{
			temp = d1 * d2;
			if (is_palindrome(temp))
				max = (temp > max) ? temp : max;
		}
	}
	printf("Largest palindrome of 3 digit numbers is: %d\n", max);
}


/**
  * is_palindrome - A function that checks if list is a palindrome.
  * @num: The number to check.
  * Return: 1 if number is a palindrome, or 0 if not.
  */
char is_palindrome(unsigned int num)
{
	unsigned int reverse = 0, rem = 0, n = num;

	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	if (reverse == num)
		return (1);
	return (0);
}
