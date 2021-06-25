#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - draws a triangle, by a new line
 * @size: argument of the function
 */

void print_triangle(int size)
{
	int i, j, c;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= size; i++)
		{
			c = size - i;
			while (c != 0)
			{
				_putchar(32);
				c--;

			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	_putchar('\n');
}
