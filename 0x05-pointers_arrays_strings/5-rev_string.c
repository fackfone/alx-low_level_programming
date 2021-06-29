#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that prints a string reversed followed by a new line
 * @s: argument of the function
 */

void rev_string(char *s)
{
	int i, j, k;
	int len = strlen(s);
	char s2[len + 1];


	for (k = 0; k <= len - 1; k++)
	{
		s2[k] = s[k];
	}
	for (i = len - 1, j = 0; i >= 0 && j <= len - 1; i--, j++)
	{
		s[j] = s2[i];
	}
}
