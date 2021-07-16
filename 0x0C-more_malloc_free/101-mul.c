#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _atoi - Converts chars in strings
 * @str: first argument char
 * Return: The string converted into string
 */
int _atoi(char *str)
{
	int res = 0, i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		res = res * 10 + str[i] - '0';
	}
	return (res);
}

/**
 * print - print integers to the screen
 * @integer: first parameter integer
 * Return: Nothing
 */
void print(int integer)
{
	int remainder;

	if (integer > 9)
	{
		remainder = integer / 10;
		integer -= 10 * remainder;
		print(remainder);
	}
	_putchar('0' + integer);
}

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
		print(int1 * int2);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	_putchar('\n');
	return (0);
}
