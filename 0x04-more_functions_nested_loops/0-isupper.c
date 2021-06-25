#include "holberton.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: parameter of the function
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int retval;

	if (isupper(c))
	{
		retval = 1;
	}
	else
	{
		retval = 0;
	}
	return (retval);
}
