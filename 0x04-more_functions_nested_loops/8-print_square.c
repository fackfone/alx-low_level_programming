#include "holberton.h"
#include <stdio.h>

/**
 * print_square - draws a square, by a new line
 * @size: argument of the function
 */

void print_square(int size)
{
	int i, counter = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (counter <= size)
		{
			for (i = 1 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			counter++;
		}
	}
	_putchar('\n');
}
