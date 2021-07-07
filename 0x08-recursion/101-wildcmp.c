#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: first parameter of function
 * @s2: second parameter of function
 * Return: 1 if identic, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 2));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 2));
		}
		else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}
