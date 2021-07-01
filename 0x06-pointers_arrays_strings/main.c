#include <stdio.h>
#include "holberton.h"

int main(void)

{
	char x[] = "Holberton School. Prepare for the worst. Capitalize on what comes. hello world!\n";
	char *ptr;
	/*
	 * char ba[] = "is nice.\n";
	 * */
	
	ptr = cap_string(x);
	printf("%s", ptr);
	printf("%s", x);

	/*
	 * print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	*/
	return (0);
}
