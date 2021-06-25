#include "holberton.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: argument of the function
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}