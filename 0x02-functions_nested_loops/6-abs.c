#include <stdio.h>
#include <stdlib.h>
int _abs(int);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

/**
 * _abs - Computes the absolute value of an integer
 * @c: The argument of the function and take as input characters
 * Return: the absolute value of a number
 */

int _abs(int c)
{
	int result;

	result = abs(c);
	return (result);
}
