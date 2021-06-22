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

	result = n % 10;
	return (result);
}
