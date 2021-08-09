#include "main.h"
#include <string.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * @filename: first argument of the function and pointer
 * @letters: second argument and size of letters
 * Return: the actual number of letters it could read, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t length;
	int fd;

	if (filename == NULL)
		return (0);
	buffer = malloc((sizeof(char) * letters) + 1);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	length = read(fd, buffer, (sizeof(char) * letters));
	if (length == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	length = write(STDOUT_FILENO, buffer, length);
	if (length == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (length);
}
