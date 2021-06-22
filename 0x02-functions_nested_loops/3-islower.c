#include <stdio.h>
#include <ctype.h>
int _islower(int c);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar(10);
	return (0);
}

/**
 * _islower - Checks if a character is lowercase
 * @c: The argument of the function and take as input characters
 * Return: Always  1 if  character is lowercase and 0 if uppercase
 */

int _islower(int c)
{
	int result;

	if (islower(c))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
