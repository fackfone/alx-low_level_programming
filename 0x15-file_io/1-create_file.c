#include "main.h"
#include <string.h> 

/**
 * read_textfile - Read the contents in a file
 * @file: File to read and pointer
 * @size: Size of bytes to print to sdout
 */
ssize_t read_textfile(const char* file, size_t size)
{
	int fdes;
	ssize_t to_return;
	char *buf;

	fdes = open(file, O_RDONLY);
	if (fdes == -1)
		return (0);
	buf = malloc((sizeof(char) * size) + 1);
	to_return = read(fdes, buf, size);
	if (to_return == -1)
	{
		free(buf);
		close(fdes);
		return (0);
	}
	free(buf);
	close(fdes);
	return (to_return);

}

/**
 * _strlen - Computes the length of a string
 * @s: first argument and string
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - Creates a file
 * @filename: first argument of the function and name of the file
 * @textcontent: second argument and string to write to the file
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *textcontent)
{
	ssize_t length;
	int fd, fdr;

	if (filename == NULL)
		return (-1);
	fdr = read_textfile(filename, 1000);
	if (fdr == 1)
		return (-1);
	close(fdr);
	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (textcontent)
	{
		length = write(fd, textcontent, _strlen(textcontent));
		if (length == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
