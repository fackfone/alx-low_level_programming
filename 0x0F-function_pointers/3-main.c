#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 when function perform well
 */

int main(int argc, char **argv)
{
	int int1, int2, res;
	char *op;

	if (argc == 4)
	{
		op = argv[2];
		int1 = atoi(argv[1]);
		int2 = atoi(argv[3]);
		if (get_op_func(op) == NULL || op[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		if (int2 == 0 && (*op == '/' || *op == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		res = get_op_func(op)(int1, int2);
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
