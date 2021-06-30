#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array as argument
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int realarray[1000];

	for (i = 0; i < n; i++)
	{
		realarray[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = realarray[n - 1 - i];
	}
}
