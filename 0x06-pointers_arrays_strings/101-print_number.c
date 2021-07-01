#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * print_number - fucntion that prints an integer
 * @n: first argument of the function
 */
void print_number(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
