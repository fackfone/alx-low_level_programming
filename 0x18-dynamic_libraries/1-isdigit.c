#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: parameter of the function
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(10);
}
