#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: argument of the function
 */

void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n; i++)
		{
			c = i;
			while (c != 0)
			{
				_putchar(' ');
				c--;

			}
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
	}
}
