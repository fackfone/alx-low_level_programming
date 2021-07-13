#include <stdio.h>
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
	int i, j, counter = 0;
	char *ptr;

	ptr = malloc(ac);
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
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
