#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, error;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(temp);
		return (0);
	}

	error = read(fd, temp, letters);
	if (error < 0)
	{
		free(temp);
		return (0);
	}

	error = write(STDOUT_FILENO, temp, letters);
	free(temp);
	close(fd);

	if (error < 0)
		return (0);
	return ((ssize_t)error);
}
