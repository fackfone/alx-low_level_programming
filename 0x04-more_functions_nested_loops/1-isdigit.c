#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit 
 * @c: parameter of the function
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	int retval;

	if (isdigit(c))
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	_putchar('\n');
	return (retval);
}
