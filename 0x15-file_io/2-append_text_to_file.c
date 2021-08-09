#include "main.h"
#include <string.h>

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
 * append_text_to_file - Appends text at the end of a file
 * @filename: first argument of the function and name of the file
 * @textcontent: second argument and string to write to the file
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *textcontent)
{
	ssize_t length;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
