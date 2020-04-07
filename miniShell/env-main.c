#include <stdio.h>

/**
 * main - prints the environment
 * @ac: The number of arguments
 * @av: The pointer to array of arguments
 * @env: The pointer to anviromental variables
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
