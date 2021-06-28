#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string reversed followed by a new line
 * @s: argument of the function
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);

	}
	putchar(10);

}
