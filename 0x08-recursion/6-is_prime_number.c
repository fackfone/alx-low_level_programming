#include "holberton.h"
#include <string.h>
#include <stdio.h>



/**
 * eval_prime - evaluates if number is prime number
 * @first_digit: parameter of function
 * @last_digit: parameter of function
 * Return: 1 if prime number and 0 otherwise
 */

int eval_prime(int first_digit, int last_digit)
{
	if (last_digit < 2 || last_digit % first_digit == 0)
	{
		return (0);
	}
	else if (first_digit > last_digit / 2)
	{
		return (1);
	}
	else
	{
		return (eval_prime(first_digit + 1, last_digit));
	}
}


/**
 * is_prime_number - states if n is prime number
 * @n: parameter of function
 * Return: 1 if prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n < 0)
	{
		return (0);
	}
	return (eval_prime(2, n));
}
