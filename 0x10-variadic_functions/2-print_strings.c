#include <stdio.h>
#include "variadic_functions.h"
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
	char *str;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
