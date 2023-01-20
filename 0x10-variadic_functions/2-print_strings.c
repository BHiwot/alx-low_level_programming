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
	char *num;

	if (n > 0)
	{
		va_start(vl, n);
		for (i = 1; i < n; i++)
		{
			num = va_arg(vl, char *);
			if (num == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", num);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(vl);
	}
	printf("\n");
}
