#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars and initialzes with specific char
 * @size: first paramater (integer)
 * @c: second paramater (char)
 * Return: A pointer to the array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *pt_ar;
	int value = 0, i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		pt_ar = malloc(sizeof(int) * size);
		value = sizeof(int) * size;
		if (pt_ar == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < value; i++)
			{
				*(pt_ar + i) = c;
			}
		}
	}
	return (pt_ar);
}
