#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - Print 10 times all the letters of the alphabet
 */
void print_alphabet_x10(void)
{
	int i = 0, value = 0, n = 0;

	while (n <= 9)
	{
		for (i = 0; i <= 25; i++)
		{
		value = 97 + i;
		putchar(value);
		}
		putchar(10);
		n++;
	}
}
