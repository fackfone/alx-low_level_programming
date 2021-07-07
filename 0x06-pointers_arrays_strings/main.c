#include <stdio.h>
#include "holberton.h"

int main(void)

{
	char x[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *ptr;
	/*
	 * char ba[] = "is nice.\n";
	 * */
	
	ptr = cap_string(x);
	printf("%s", x);
	printf("%s", ptr);

	/*
	 * print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	*/
	return (0);
}
