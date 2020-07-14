#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - prints the environment
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;
	size_t buf_size = 32;
	size_t characters;
	char *av[] = {"/bin/ls", "-l", "/./", NULL};

	buffer = (char *)malloc(buf_size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		free(buffer);
		exit(1);
	}

	prmpt();

	char_size = getline(&buffer, &buf_size, stdin);
	printf("%zu characters were read.\n", char_size);
	printf("You typed: '%s'\n", buffer);

	av[0] = *buffer;
	if (execve(av[0], av, NULL) == -1)
	{
		perror("Error:");
	}
	return (0);
}

/**
 * prompt - A function that prints the prompt
 * Return: Nothing.
 */
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
