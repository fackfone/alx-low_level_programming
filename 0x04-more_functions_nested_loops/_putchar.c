<<<<<<< HEAD
#include "holberton.h"
=======
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
>>>>>>> e0c6c66f4937637b94de6699c63fd1ac9afd8728
