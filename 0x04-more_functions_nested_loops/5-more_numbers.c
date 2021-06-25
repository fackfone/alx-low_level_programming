#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times numbers range 0-9 by new line
 */

void more_numbers(void)
{
	int i, counter;

	while (counter < 11)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
	counter++;
	_putchar('\n');
	}
	_putchar('\n');
}
