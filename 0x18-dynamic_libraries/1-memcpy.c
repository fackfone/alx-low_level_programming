#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* _memcpy - function that copies memory area
 * @dest: first  argument of the function and pointer
 * @src: second argument of the function and pointer
 * @n: third argument of the function
 * Return: the pointer value to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
