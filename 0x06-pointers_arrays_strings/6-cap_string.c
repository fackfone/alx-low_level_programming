#include "holberton.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: first  argument of the function
 * Return: the pointer value to dest
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (islower(s[i]))
			{
				s[i] = toupper(s[i]);
			}
			continue;
		}
		else if (s[i] == ' ')
		{
			++i;
			if (islower(s[i]))
			{
				s[i] = toupper(s[i]);
			}
			continue;
		}
		else if (!isdigit(s[i]) && !isalpha(s[i]))
		{
			++i;
			if (islower(s[i]))
			{
				s[i] = toupper(s[i]);
			}
			continue;
		}
		else
		{
			if (islower(s[i]))
			{
				s[i] = tolower(s[i]);
			}
		}
	}
	return (s);
}
