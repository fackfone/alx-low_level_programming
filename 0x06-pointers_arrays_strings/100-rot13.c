#include "holberton.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * rot13 - function that encode a string using rot13
 * @s: first  argument of the function
 * Return: the encoded value
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (; !isdigit(s[i]) && isalpha(s[i]);)
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] = s[i] + 13;
				break;
			}
			s[i] = s[i] - 13;
			break;
		}
	}
	return (s);
}
