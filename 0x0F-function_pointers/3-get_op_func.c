#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 *
 * @s: Operator passed first argument
 * Return: A pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 6)
	{
	if (s == ops[i].op)
		return (ops[i].f);
	i++;
	}
	return (NULL);
}

