#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * pow_recursion -calculates x raised to power of y
 * @x: first parameter of function
 * @y: second parameter of function
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
