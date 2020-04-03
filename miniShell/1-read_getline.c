#include <stdio.h>
#include <stdlib.h>

//int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf(" $ ");
	characters = getline(&buffer,&bufsize,stdin);
	printf("%zu characters were read.\n",characters);
	printf("You typed: '%s'\n",buffer);

	return(0);
}
