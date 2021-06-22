#include <stdio.h>
#include <ctype.h>
int print_last_digit(int);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The argument of the function that parses into function
 * Return: Always the last value of a digit
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	return (result);
}
