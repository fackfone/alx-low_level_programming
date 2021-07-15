#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - evaluates the length of string
 * @str:first parameter as pointer
 * Return: the length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat -concatenates two strings
 * @s1: first paramater (pointer)
 * @s2: second paramater (pointer)
 * @n: third paramter (integer)
 * Return: A pointer to the new concatenated string, NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt_ar;
	unsigned int value = 0, i, len1, len2, k;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	if (1)
	{
		value = (len1 + n);
		pt_ar = malloc(value * sizeof(char) + 1);
		if (pt_ar == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < len1; i++)
			{
				*(pt_ar + i) = *(s1 + i);
			}
			for (k = 0; s2[k] != '\0' && k < n; k++)
			{
				*(pt_ar + k + len1) = *(s2 + k);
			}
			*(pt_ar + len1 + n) = '\0';
		}
	}
	return (pt_ar);
}
