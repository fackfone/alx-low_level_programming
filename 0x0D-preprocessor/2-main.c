#include <stdio.h>
#include <stdlib.h>
#define FFILE __FILE__

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; FFILE[i] != '\0'; i++)
	{
		putchar(FFILE[i]);
	}
	putchar(10);
	return (0);
}
