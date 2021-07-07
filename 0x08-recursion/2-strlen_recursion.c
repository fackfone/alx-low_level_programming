#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - a function that retruns the length of a string
 * @s: first argument of the function and pointer
 * Return: length of string integer
 */

int _strlen_recursion(char *s)
{
	int i = 0, c;

	if (*s != '\0')
	{
		c = i + 1;
		s++;
		_strlen_recursion(s);
	}
	return (c);
}
