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
	char *s2;

	s2 = s;

	len = strlen(s);

	for (i = len - 2; i >= 0; i--)
	{
		s[i] = s2[len - 2 - i];

	}
}
