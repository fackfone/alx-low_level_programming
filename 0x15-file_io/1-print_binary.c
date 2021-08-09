#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * division - Divide n by 2 until it reaches 0
 * @num: first argument of the function and unsigned int
 */

void division(unsigned long int num)
{
	unsigned long int divider = 0;
	unsigned long int remainder = 0;

	divider = num >> 1;
	remainder = (num - (divider * 2));
	num = divider;
	if (num != 0)
		division(num);
	_putchar(remainder + '0');
}

/**
 * print_binary - Prints the binary representation of number
 * @n: first argument of the function and unsigned int
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	division(n);
}
