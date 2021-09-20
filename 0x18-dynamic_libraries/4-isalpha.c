#include <stdio.h>
#include <ctype.h>
#include "main.h"
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
