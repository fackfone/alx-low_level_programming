#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * factorial - estimates factorial of n
 * @n: parameter of function
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
}
