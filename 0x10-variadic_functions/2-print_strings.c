#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - ...
 * @separator: ..
 * @n: ..
 * Return: ..
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *num;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(vl, char*);
		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", num);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(vl);
	printf("\n");
}
