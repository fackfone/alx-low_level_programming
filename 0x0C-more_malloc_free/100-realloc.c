#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Reallocates memory block using `malloc` and `free`
 * @ptr: first paramater (pointer)
 * @old_size: second paramater (integer)
 * @new_size: third paramater (integer)
 * Return: A void pointer, NULL otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}
