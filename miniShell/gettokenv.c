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

	buffer[strlen(buffer) -1] = '\0';
	printf("miralo:    %s", buffer);

	/* get the first token */
	token = strtok(buffer, s);
	printf("%s", token);

	/* walk through other tokens */
	while (token != NULL)
	{
		printf(" %s", token);
		token = strtok(NULL, s);
	}
	printf("%s", token);
	free(buffer);
	free(token);

	return (0);
}
