#include "holberton.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: parameter of the function
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
