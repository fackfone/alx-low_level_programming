#include <stdio.h>
#include "holberton.h"

int main(void)

{
	int len;	
	char *str;

	str = "Holberton";
	len = _strlen(str);
	printf("%d\n ", len);
	return (0);
}
