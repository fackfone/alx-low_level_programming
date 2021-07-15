#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

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
	int value = 0, i, len1, len2, k;

	if (s2 == NULL)
	{
		s2 = "\0";
	}
	if (s1 == NULL)
	{
		s1 = "\0";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if ((int)n >= len2)
	{
		n = len2;
	}
	if (1)
	{
		value = (int)(len1 + (int)n);
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
			for (k = 0; k < (int)n; k++)
			{
				*(pt_ar + k + len1) = *(s2 + k);
			}
		}
	}
	return (pt_ar);
}
