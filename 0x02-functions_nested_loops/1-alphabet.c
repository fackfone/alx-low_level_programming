#include <stdio.h>

void print_alphabet(void);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Print all the letters of the alphabet
 */

void print_alphabet(void)
{
	int i = 0, value = 0;

	for (i = 0; i <= 25; i++)
	{
		value = 97 + i;
		putchar(value);
	}
	putchar(10);
}
