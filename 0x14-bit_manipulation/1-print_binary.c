#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of number
 * @n: first argument of the function and unsigned int
/bin/bash: :wq: command not found
 */

void print_binary(unsigned long int n)
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
