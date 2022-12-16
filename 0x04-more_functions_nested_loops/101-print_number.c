#include <stdio.h>

/**
 * print_number - Print number
 * @n: number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');


}
