#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_diagsums - prints sum of the two diagonals of square matrix
 * @a: first argument and pointer
 * @size: second argument
 */

void print_diagsums(int *a, int size)
{
	int *arr;
	int i, j, k, c = 0;
	int left_sum = 0, right_sum = 0, result1, result2;

	c = size - 1;
	arr = &a[0];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				result1 = *(arr + i * size + j);
				left_sum += result1;
			}
		}
		for (k = c; k >= 0; k--)
		{
			if ((i + k) == c)
			{
				result2 = *(arr + i * size + k);
				right_sum += result2;
			}
		}
	}
	printf("%d", left_sum);
	putchar(',');
	putchar(' ');
	printf("%d", right_sum);
	putchar(10);
}
