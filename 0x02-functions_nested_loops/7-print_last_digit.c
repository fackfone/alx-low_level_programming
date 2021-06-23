#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The argument of the function that parses into function
 * Return: Always the last value of a digit
 */

int print_last_digit(int n)
{
	int result;

	if (n > 0)
	{
		_putchar(n % 10 + '0');
		result = n % 10;
	}
	else
	{
	
		result = n % 10;
		_putchar(result + '0');
	}
	return (result);
}
