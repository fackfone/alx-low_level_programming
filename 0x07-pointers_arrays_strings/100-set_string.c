#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * set_string - a function that sets the value of apointer to a char 
 * @s: first  argument of the function and pointer
 * @to: second argument of the function and pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
