#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - Prints the binary representation of number
 * @n: first argument and  unsigned int
 * @m: second argument of the function and unsigned int
 * Return: Return bits we would need to flip to get from one
 * number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;
	unsigned long int range, checker;

	count = 0;
	checker = 1;
	range = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checker == (range & checker))
			count++;
		checker <<= 1;
	}
	return (count);
}
