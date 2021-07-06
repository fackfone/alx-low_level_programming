#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * set_string - a function that locates a substring
 * @s: first  argument of the function and pointer
 * @to: second argument of the function and pointer
 * Return: a pointer to the beginning of the located substring
 */

void set_string(char **s, char *to)
{
	*s = to;
}
