#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
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
