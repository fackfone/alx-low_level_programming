#include "holberton.h"
#include <stdio.h>

void print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if(i % 10)
		{
			printf(" ");
		}
		if(!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}


/**
 * main -check the code for ALX School Students
 */

int main(void)
{
	char buffer[98] = {0x00};

	print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("**********************************************************\n");
	print_buffer(buffer, 98);
	return (0);
}
