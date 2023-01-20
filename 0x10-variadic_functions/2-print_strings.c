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

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(vl, char *);
		if (num == NULL)
		{
			printf("%s", "(nil)");
		}
		if (i == n - 1)
		{
			printf("%s", num);
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s%s", num, separator);
			}
			else
			{
				printf("%s", num);
			}
		}
	}
	va_end(vl);
	}
	printf("\n");
}
