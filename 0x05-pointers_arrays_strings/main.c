#include <stdio.h>
#include "holberton.h"

int main(void)

{
	char array[10] = "Holberton";
	int len;

	len = _strlen(array);
	printf("%d\n", len);
	printf("%s\n", array);
	rev_string(array);
	printf("%s\n", array);
	return (0);
}
