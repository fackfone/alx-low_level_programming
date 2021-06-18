#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, value = 0;

	for (i = 0; i <= 25; i++)
	{
		value = 97 + i;
		putchar(value);
	}
	if (i == 26)
	{
	for (i = 0; i <= 25; i++)
	{
		value = 65 + i;
		putchar(value);
	}
	}
	return (0);
}
