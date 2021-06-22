#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The argument of the function that parses into function
 * Return: Always  1 if  n is greater than 0
 * Always 0 if n is 0
 * Always -1 if n is less than 0
 */

int print_sign(int n)
{
	int result, sign;

	if (n == 0)
	{
		result = 0;
		sign = '0';
	}
	else if (n > 0)
	{
		result = 1;
		sign = '+';
	}
	else
	{
		result = -1;
		sign = '-';
	}
	_putchar(sign);
	return (result);
}
