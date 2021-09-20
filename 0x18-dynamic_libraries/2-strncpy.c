#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strncpy - function that copies a string
 * @dest: first  argument of the function
 * @src: second argument of the function
 * @n: third argument of the function
 * Return: the pointer value to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));

}
