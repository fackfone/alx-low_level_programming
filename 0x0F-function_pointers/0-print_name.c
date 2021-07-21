#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints name using functions pointers
 * @name: first  argument of the function and pointer
 * @f: second argument and function pointer
 * Return:NOTHING
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (f != NULL)
	{
		ptr = f;
		ptr(name);
	}
}
