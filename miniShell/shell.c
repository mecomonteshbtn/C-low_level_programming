#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", ".", NULL};

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	return (0);
}
