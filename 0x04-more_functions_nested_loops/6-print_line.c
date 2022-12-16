#include "main.h"

/**
 * print_line - function draw a stright line
 * @n: parameter
 * Return: a stright line
 */
void print_line(int n)
{
	int li;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= n; li++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
