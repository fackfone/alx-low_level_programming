#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, counter = 0;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (counter != 9)
		{
			putchar(44);
			putchar(32);
		}
	counter++;
	}
	putchar(10);
	return (0);
}
