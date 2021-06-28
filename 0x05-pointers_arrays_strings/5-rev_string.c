#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that prints a string reversed followed by a new line
 * @s: argument of the function
 */

void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		s[i] = s[len - i - 1];

	}
	putchar(10);
}
