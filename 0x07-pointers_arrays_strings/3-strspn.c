#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
* _strspn - Gets the length of a prefix substring
 * @s: first  argument of the function and pointer
 * @accept: second argument of the function
 * Return: bytes from s which consitst of bytes from accept
 */

char *_strspn(char *s, char accept)
{
	return (strspn(s, accept));
}
