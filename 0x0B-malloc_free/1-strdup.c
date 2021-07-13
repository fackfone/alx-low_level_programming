#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicates a string given in newly allocated memory
 * @str: first paramater (pointer)
 * Return: A pointer to the new string, NULL otherwise
 */

char *_strdup(char *str)
{
	char *pt_ar;
	int value = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		value = (int)(strlen(str));
		pt_ar = malloc(value + 1);
		if (pt_ar == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < value; i++)
			{
				*(pt_ar + i) = *(str + i);
			}
		}
	}
	return (pt_ar);
}
