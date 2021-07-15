#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: parameter of the function
 * Return: 1 on success, and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
