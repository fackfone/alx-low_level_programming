#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strncat - function that concatenates two strings
 * @dest: first  argument of the function
 * @src: second argument of the function
 * @n: third argument of the function
 * Return: the pointer value to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));

}
