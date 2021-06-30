#include "holberton.h"
#include <ctype.h>
#include <stdio.h>

/**
* string_toupper - function that changes lowercase letters to upper
 * @s: first argument of the function
 * Return: the uppercase of the lowercase letters
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
