#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - Prints the binary representation of number
 * @n: first argument and pointer to unsigned int
 * @index: second argument of the function and unsigned int
 * Return: The value of a bit at a given index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int divider;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = ~(1 << index);
	*n = *n & divider;
	return (1);
}
