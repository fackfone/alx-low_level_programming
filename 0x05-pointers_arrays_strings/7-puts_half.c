#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints a string reversed followed by a new line
 * @str: argument of the function
 */

void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = (len) / 2; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar(10);
	}
	else
	{
		for (i = (len - 1) / 2 ; i < len; i++)
		{
			putchar(str[i]);
		}
		putchar(10);
	}

}
