#include <stdio.h>
#include <ctype.h>
int _isalpha(int c);

/**
 *main - Entry point
 *Return: Always 0(Success)
 */


int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar(10);
	return (0);
}

/**
 * _isalpha - Checks for alphabetic character
 * @c: The argument of the function and take as input characters
 * Return: Always  1 if  character is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	int result;

	if (isalpha(c))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
