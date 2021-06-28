#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of arrays by a new line
 * @a: first argument of the function
 * @n: second argument of the function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
		}
	}
	putchar(10);
}
