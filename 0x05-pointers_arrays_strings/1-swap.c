#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: first argument of the function
 * @b: second argument of the function
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
