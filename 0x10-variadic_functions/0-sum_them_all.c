#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - ...
 * @n: ..
 * Return: ..
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int a;

	if (n != 0)
	{
		va_start(vl, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(vl, int);
		}
		va_end(vl);
		return (sum);
	}
	return (0);
}
