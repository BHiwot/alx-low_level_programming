#include "main.h"

/**
 * print_sign - beginning
 * @n: single letter input
 * Return: 1 and print + return 0 if n is zero return -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
