#include <string.h>
#include <stdio.h>

int main (void)
{
	char str[80] = "This is - www.tutorialspoint.com - website";
	const char s[2] = "-";
	char *token;

	/* get the first token */
	token = _strtok(str, s);

	/* walk through other tokens */
	while( token != NULL ) {
		printf( " %s\n", token );

		token = _strtok(NULL, s);
	}

	return(0);
}

char *_strtok(char *str, const char *delim)
{
	int *token;

	while (str[len] == NULL || str[len] == *delim)
		len++;

	
	token = malloc(sizeof(char) * len);
	if (token == NULL)
	{
		free(token);
		return NULL;
	}

	for (; i < len; i++)
		token = str[i];

	return token;
}
