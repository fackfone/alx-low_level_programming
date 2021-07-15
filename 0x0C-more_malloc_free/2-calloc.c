#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: first paramater (integer)
 * @size: second paramater (integer)
 * Return: A void pointer, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pt_ar;
	int value = 0;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	else
	{
		value = (nmemb * size);
		pt_ar = malloc((int)value);
		if (pt_ar == NULL)
		{
			return (NULL);
		}
	}
	memset(pt_ar, 0, nmemb * size);
	return (pt_ar);
}
