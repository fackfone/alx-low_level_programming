#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _strcpy - function that copies string from pointer to another pointer
 * @dest: first  argument of the function
 * @src: second argument of the function
 * Return: the pointer value to dest
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));

}
