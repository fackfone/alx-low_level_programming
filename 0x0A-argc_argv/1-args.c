#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: first paramater (argument count)
 * @argv: second paramater (argument vector)
 * Return: Always 0 SUCCESS
 */

int main(int argc, char *argv[])
{
	int count_arg = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			count_arg++;
	}
	printf("%d\n", count_arg);
	return (0);
}
