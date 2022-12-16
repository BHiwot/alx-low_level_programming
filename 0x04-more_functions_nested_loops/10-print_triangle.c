#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
				if (b >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
