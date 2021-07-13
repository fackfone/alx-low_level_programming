#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat -concatenates two strings
 * @s1: first paramater (pointer)
 * @s2: second paramater (pointer)
 * Return: A pointer to the new concatenated string, NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *pt_ar;
	int value = 0, i, len1, len2, k;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL && s2 != NULL)
	{
		pt_ar = s2;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		pt_ar = s1;
	}
	else if (s1 == NULL && s2 == NULL)
	{
		pt_ar = " ";
	}
	else
	{
		value = (int)(len1 + len2);
		pt_ar = malloc(value);
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
			for (k = 0; k < len2; k++)
			{
				*(pt_ar + k + len1) = *(s2 + k);
			}
		}
	}
	return (pt_ar);
}
