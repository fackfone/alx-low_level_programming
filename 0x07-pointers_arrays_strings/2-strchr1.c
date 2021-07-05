#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _strchr - function that locates a character in a string
 * @s: first  argument of the function and pointer
 * @c: second argument of the function
 * Return: a pointer of c in s and NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (; ; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
	return (0);
}
