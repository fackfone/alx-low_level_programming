#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_integer(va_list list);
void print_char(va_list list);
void print_float(va_list list);
void print_string(va_list list);
/**
 * struct datatype_func - Struct
 * @type: Type of first argument type points to
 * @f: function used to print
 */
typedef struct datatype_func
{
	char *type;
	void (*fmod)(va_list);
} datatype_func;

#endif
