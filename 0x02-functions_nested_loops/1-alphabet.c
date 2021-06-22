#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Print all the letters of the alphabet
 */

void print_alphabet(void)
{
	int i = 0, value = 0;

	for (i = 0; i <= 25; i++)
	{
		value = 97 + i;
		putchar(value);
	}
	putchar(10);
}
