#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints char
 * @list: variadic list
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_integer - Prints integer
 * @list: variadic list
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - Prints float
 * @list: variadic list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string - Prints strings
 * @list: variadic list
 */
void print_string(va_list list)
{
	char *string = va_arg(list, char *);

	string == NULL ? printf("(nil)") : printf("%s", string);
}


/**
 * print_all - Prints anything
 * @format: First argument
 * Return: NOTHING
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	char *separator = "";

	datatype_func rangefunc[] = {
		{ "c", print_char},
		{ "i", print_integer},
		{ "f", print_float},
		{ "s", print_string},
		{NULL, NULL}
	};
	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*rangefunc[j].type == format[i])
			{
				printf("%s", separator);
				rangefunc[j].fmod(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
