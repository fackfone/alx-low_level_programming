#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _memset - function that fills memory with a constant byte
 * @s: first  argument of the function and pointer
 * @b: second argument of the function
 * @n: third argument of the function
 * Return: the pointer value to the mem area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
