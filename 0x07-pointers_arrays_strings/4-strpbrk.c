#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* _strspbrk - a function that searches a string for any of a set of bytes
 * @s: first  argument of the function and pointer
 * @accept: second argument of the function
 * Return: bytes from s which consitst of bytes from accept
 */

char *_strpbrk(char *s, char accept)
{
	return (strpbrk(s, accept));
}
