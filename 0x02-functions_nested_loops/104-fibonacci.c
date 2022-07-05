#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */
int main(void)
{
        unsigned long int t0 = 0, t1 = 1, s;

        int i;

        for (i = 1; i<= 98; i++)
        {
                s = t0 + t1;

                if (i != 98)
                {
                        printf("%lu, ", s);
                }
                else
                {
                        printf("%lu\n", s);
                }
                t0 = t1;
                t1 = s;
        }
        return (0);
}
