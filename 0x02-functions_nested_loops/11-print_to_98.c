#include <stdio.h>
#include <ctype.h>
int print_sign(int n);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * print_sign - Prints the sign of a number
 * @n: The argument of the function that parses into function
 * Return: Always  1 if  n is greater than 0
 * Always 0 if n is 0
 * Always -1 if n is less than 0
 */

int print_sign(int n)
{
	int result, sign;

	if (n == 0)
	{
		result = 0;
		sign = '0';
	}
	else if (n > 0)
	{
		result = 1;
		sign = '+';
	}
	else
	{
		result = -1;
		sign = '-';
	}
	putchar(sign);
	return (result);
}
