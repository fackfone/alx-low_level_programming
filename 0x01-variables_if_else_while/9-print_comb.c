#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '10')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
