#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The argument of the function that parses into function
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98 || n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
