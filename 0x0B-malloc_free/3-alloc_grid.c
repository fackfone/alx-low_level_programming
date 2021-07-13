#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Print a 2 dimentsional array of integers
 * @width: first paramater (integer)
 * @height: second paramater (integer)
 * Return: A pointer to a 2 dimensional array of integers, NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **pt_ar;
	int value = 0, i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		value = (sizeof(*pt_ar) * height);
		pt_ar = malloc(value);
		if (pt_ar == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				pt_ar[i] = malloc(sizeof(**pt_ar) * width);
				if (pt_ar[i] == NULL)
				{
					return (NULL);
				}
				for (k = 0; k < width; k++)
				{
					pt_ar[i][k] = 0;
				}
			}
		}
	}
	return (pt_ar);
}
