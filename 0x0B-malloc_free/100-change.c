#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 *check_cents - evaluates the amount of money to pay back
 *@arg: first argument
 *Return: the number of minimum cents
 */
int check_cents(int arg)
{
	int number_coins = 0, c = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; coins[i] != '\0'; i++)
	{
		if (arg < coins[i])
			continue;
		else
		{
			c = arg % coins[i];
			if (c == 0)
			{
				number_coins += arg / coins[i];
				break;
			}
			else
			{
				number_coins += arg / coins[i];
				arg = c;
			}
		}
	}
	return (number_coins);
}
/**
 * main - Entry point
 * @argc: first paramater (argument count)
 * @argv: second paramater (argument vector)
 * Return: Always 0 SUCCESS
 */

int main(int argc, char *argv[])
{
	int number = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		number = atoi(argv[1]);
		printf("%d\n", check_cents(number));
	}
	return (0);
}
