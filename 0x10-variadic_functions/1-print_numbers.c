#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - ..
 *  @separator: ..
 *  @n: ..
 *  Return: ..
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, i);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i != n - 1)
			printf("%s", separator ? separator : "");
		i++
	}
	va_end(vl);
	printf("\n");
}
