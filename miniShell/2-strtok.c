#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * main - An entry main function
  * Return: Nothing
  */
int main(void)
{
	char *buffer, *token;
	size_t bufsize = 32, characters;
	const char s[2] = "-";

	/* get the string from keyboard */
	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		free(buffer);
		exit(1);
	}
	characters = getline(&buffer, &bufsize, stdin);
	printf("   %zu   \n", characters);

	/* get the first token */
	token = strtok(buffer, s);

	/* walk through other tokens */
	while (token != NULL)
	{
		printf(" %s\n", token);
		token = strtok(NULL, s);
	}
	free(buffer);
	free(token);

	return (0);
}
