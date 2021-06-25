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
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size; i++)
		{
			c = size - i;
			while (c != 0)
			{
				_putchar(' ');
				c--;

			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
