#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: First  argument of the function and array
 * @size: Second argument and size of the array
 * @cmp: Third argument and pointer to a function used int the program
 * Return: Index of the element and -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				counter = i;
				return (counter);
			}
		}
	}
	return (-1);

}
