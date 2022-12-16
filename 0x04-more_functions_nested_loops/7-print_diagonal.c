#include "main.h"

/**
 * print_diagonal - function draw diagonal
 * @n: parameter
 * Return: a strightdiagonal
 */
void print_diagonal(int n)
{
	int li, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= n; li++)
		{
			for (s = 1; s < li; s++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
