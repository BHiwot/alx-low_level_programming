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
		if (i != 0)
			printf("%s", separator ? separator : "");
		printf("%s", num ? num : "(nil)");
	}
	va_end(args);
	printf("\n");
}
