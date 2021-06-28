#include <stdio.h>
#include "holberton.h"

int main(void)

{
	int len;	
	char *str;

	str = "Holberton is one of the best thing that happens in my life for this year 2021";
	printf("%d", _strlen(str));
	puts_half(str);
	return (0);
}
