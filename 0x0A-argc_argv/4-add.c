#include <stdio.h>
#include <ctype.h>
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
	int add_arg = 0, i, arg;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arg = atoi(argv[i]);
			if (!(arg == 0))
			{
				add_arg += arg;
			}
			else
			{	printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", add_arg);
	return (0);
}
