#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: first paramater (integer)
 * Return: A void pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;
       
	ptr = malloc(b);
	if (ptr == 0) 
	{
		exit(98);
	}
	return (ptr);
}
