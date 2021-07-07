#include "holberton.h"
#include <string.h>
#include <stdio.h>



/**
 * eval_sqrt - check if square root of n exists
 * @n: parameter of function
 * @tmp: parameter iterative to check value
 * Return: -1 or the square root of n
 */

int eval_sqrt(int tmp, int n)
{
	if (tmp * tmp == n)
		return (tmp);
	if (tmp * tmp > n)
		return (-1);
	return (eval_sqrt(tmp + 1, n));
}

/**
 * _sqrt_recursion - estimates square root of n
 * @n: parameter of function
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (eval_sqrt(1, n));
}
