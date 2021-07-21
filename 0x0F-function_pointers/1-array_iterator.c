#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Executes  each element of an array through function pointer
 * @array: First  argument of the function and array
 * @size: Second argument and size of the array
 * @action: Third argument and pointer to a function used int the program
 * Return:NOTHING
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
