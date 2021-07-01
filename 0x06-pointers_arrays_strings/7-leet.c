#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - function that encode a string into 1337
 * @s: first  argument of the function
 * Return: the encoded value
 */

char *leet(char *s)
{
	int i, j, k;
	char encode[15] = "aA4eE3oO0tT7lL1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k <= 4 ; k++)
		{
			j = 3 * k;
			if (s[i] == encode[j] || s[i] == encode[j + 1])
			{
				s[i] = encode[j + 2];
			}
		}
	}
	return (s);

}
