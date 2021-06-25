#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers range 0-9 followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
