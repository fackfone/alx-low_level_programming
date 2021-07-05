#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints sum of the two diagonals of square matrix
 * @a: first argument and pointer
 * @size: second argument
 */

void print_diagsums(int *a, int size)
{
	int *arr;
	unsigned int i, j, k, c = 0;
	int left_sum = 0, right_sum = 0;

	c = size - 1;
	arr = &a[0];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				left_sum += *(arr + i * size + j);
			}
		}
		for (k = 0; k < size; k++)
		{
			if (i + k == c)
			{
				right_sum += *(arr + i * size + j);
			}
		}
	}
	printf("%d", left_sum);
	putchar(',');
	putchar(' ');
	printf("%d", right_sum);
	putchar(10);
}
