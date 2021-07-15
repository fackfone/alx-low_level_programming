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
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p ==  NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < new_size && i < old_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (p);
}
