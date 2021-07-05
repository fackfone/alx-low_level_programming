#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: first argument and pointer
 */

void print_chessboard(char (*a)[8])
{
	char *arr;
	int i, j;
	char val;

	arr = &a[0][0];
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			val = *(arr + i * 8 + j);
			putchar(val);
			if (j == 7)
			{
				putchar(10);
			}
		}
	}
}
