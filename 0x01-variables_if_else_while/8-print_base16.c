#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, value = 0, j = 0, result = 0;

	for (i = 0; i <= 9; i++)

	{
		value = '0' + i;
		putchar(value);
	}
		if (i == 10)
		{
		for (j = 0; j <= 5; j++)

			{
			result = 97 + j;
			putchar(result);
			}
		}
	putchar(10);
	return (0);
}
