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
	int int1 = 0, int2 = 0;

	if (argc == 3)
	{
		int1 = _atoi(argv[1]);
		int2 = _atoi(argv[2]);
		printf("%d\n", int1 * int2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
