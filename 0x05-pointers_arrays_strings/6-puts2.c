#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints a string reversed followed by a new line
 * @str: argument of the function
 */

void puts2(char *str)
{
	int i, n;

	n = strlen(str);

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);

}
