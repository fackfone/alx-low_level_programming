#include <stdio.h>
#include "holberton.h"

int main(void)

{
	char array[10] = "Holberton";

	printf("%s\n", array);
	rev_string(array);
	printf("%s\n", array);
	return (0);
}
