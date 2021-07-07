#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: first argument of the function and pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar(10);
	}
}
