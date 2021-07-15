#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: first paramater (integer)
 * @max: second paramater (integer)
 * Return: An array of integers ordered from min to max, NULL otherwise
 */

int *array_range(int min, int max)
{
	int *pt_ar, i;
	int value = 0;
	int c = min;

	if (max < min)
	{
		return (NULL);
	}
	else
	{
		value = max - min + 1;
		pt_ar = malloc(value * sizeof(int));
		if (pt_ar == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < value; i++)
			{
				*(pt_ar + i) = c;
				c++;
			}
		}
	}
	return (pt_ar);
}
