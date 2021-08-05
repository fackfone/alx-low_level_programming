#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse - Reverse a string
 * @string:first argment and string
 * Return: the reversed string
 */
char *reverse(char string[])
{
	unsigned int i = 0, len = 0;
	unsigned int c, d;

	len = strlen(string);
	while (string[i] != '\0')
	{
		c = string[len - 1 - i];
		d = string[i];
		string[i] = c;
		string[len - i - 1] = d;
		i++;
	}
	return (string);
}

/**
 * get_bit - Prints the binary representation of number
 * @n: first argument of the function and unsigned int
 * @index: second argument of the function and unsigned int
 * Return: The value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider = 0;
	unsigned long int remainder = 0;
	char remStore[1000];
	int i = 0;
	unsigned int length;

	while (n != 0)
	{
		divider = n >> 1;
		remainder = (n - (divider * 2));
		n = divider;
		remStore[i] = remainder;
		i++;
	}
	length = strlen(remStore);
	remStore = reverse(remStore);
	if (index > (length - 1))
	{
		return (-1);
	}
	return (remStore[index]);
}
