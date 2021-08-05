#include "main.h"
#include <string.h>
#include <stdio.h>


/**
 * pow2 - Calculates 2 raised to exp
 * @exp: power raised
 * Return: the calculated value
 */
unsigned int pow2(unsigned int exp)
{
	if (exp == 0)
		return (1);
	return (2 * pow2(exp - 1));
}
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: first argument of the function and pointer
 * Return: converted number, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i = 0;
	unsigned int convertNum = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			convertNum += 0;
		else if (b[i] == '1')
			convertNum += pow2(len - i - 1);
		else
			return (0);
		i++;
	}
	return (convertNum);
}
