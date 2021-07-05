#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: first  argument of the function and pointer
 * @needle: second argument of the function and pointer
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
