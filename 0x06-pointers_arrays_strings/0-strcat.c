#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _strcat - function that concatenates two strings
 * @dest: first  argument of the function
 * @src: second argument of the function
 * Return: the pointer value to dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));

}
