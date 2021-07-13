#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first paramater (integer)
 * @av: second paramater (character)
 * Return: Arguments followed by a new line, NULL otherwise
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, value = 0, counter = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		value += strlen(av[k]);
		value++;
	}
	ptr = malloc(value + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ac >= 1)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != 0; j++)
			{
				ptr[counter] = av[i][j];
				counter++;
			}
			ptr[counter] = '\n';
			counter++;
		}
		ptr[counter] = '\0';
	}
	return (ptr);
}
