#include "holberton.h"
#include <stdio.h>

/**
 * print_square - draws a square, by a new line
 * @size: argument of the function
 */

void print_square(int size)
{
	int i;

	if (size == 0 || size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (counter <= size)
		{
			for (i = 1 ; i < size ; i++)
			{
				_putchar(35);
			}
			_putchar(10);
			counter++;
		}
	}
	_putchar('\n');
}