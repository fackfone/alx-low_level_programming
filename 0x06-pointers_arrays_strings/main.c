#include <stdio.h>
#include "holberton.h"

int main(void)

{
	char x[] = "Holberton School\n";
	char *ptr;
	/*
	 * char ba[] = "is nice.\n";
	 * */
	
	printf("%lu\n", sizeof(x));
	ptr = string_toupper(x);
	printf("%s", ptr);
	printf("%s", x);

	/*
	 * print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	*/
	return (0);
}
