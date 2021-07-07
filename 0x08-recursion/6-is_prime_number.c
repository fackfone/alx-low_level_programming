#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * is_prime_number - evaluates if n is prime number
 * @n: parameter of function
 * Return: 1 if prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n < 0 )
		return (0);
	if (n % 3 == 0 || n == )
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
}
