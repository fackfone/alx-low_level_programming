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
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
