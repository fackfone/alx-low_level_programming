#include <stdio.h>
#include "holberton.h"

int main(void)

{
	int len;	
	char *str;
	int array[5];
	array[0] = 12;
	array[1] = 102;
	array[2] = 120;
	array[3] = 1200;
	array[4] = 1002;

	print_array(array, 5);
	return (0);
}
