#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * times_table - Prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar(result + '0');
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}

		}

		putchar(10);
	}
}
