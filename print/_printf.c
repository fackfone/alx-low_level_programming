#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_int - Prints integer
 * @va_list: list of argments
 * Return: the value pointed by va_list
 */
void print_int(va_list list)
{
	int* value;

	value = &(va_arg(va_list list, int));
	write(1, value, 5);
}
/**
 * print_char - Prints character
 * @va_list: list of argments
 * Return: the value pointed by va_list
 */ rien 
void print_char(va_list list)
{
	putchar((char)va_arg(va_list list, int));
}

/**
 * _printf - Prints arguments passed in the function
 * @format: First argument
 * Return: NOTHING
 */

int _printf(const char *format, ...)
{
	va_list content;
	unsigned int i = 0, j = 0;

	datatype func[] = {
		{ "c", print_char},
		{ "i", print_int},
		{ "f", print_float},
		{ "s", print_string},
		{NULL, NULL}
	};
	va_start(content, format);

	while (format && format[i])
	{
		if(format[i] == '%')
		{
			j = 0;
			while(j < 4)
			{
				if(*func[j].type == format[i + 1])
					func[j].action(content);
				j++;
			}
			if(format[i + 1] == '%')
			{
				write(1,&format[i + 1], 1);
			}
		}

	}
	va_end(content);
	return (0);
	
}
