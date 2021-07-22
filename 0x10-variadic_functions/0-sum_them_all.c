#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters
 * @n: first  argument and integer
 * Return:The sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0, i = 0;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
		return (sum);
	}
	return (0);
}
