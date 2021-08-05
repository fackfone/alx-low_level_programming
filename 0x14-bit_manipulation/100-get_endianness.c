#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Checks endianness
 * Return: Return 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int val1;
	char *val2;

	val1 = 1;
	val2 = (char *)&x;
	return (*val2);
}
