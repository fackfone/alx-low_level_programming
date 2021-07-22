#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: First argument and separator
 * @n: Second argument and integer(amount of arguments)
 * Return: All the parameter if checks are ok and NULL otherwise
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		va_end(list);
		printf("\n");
}
