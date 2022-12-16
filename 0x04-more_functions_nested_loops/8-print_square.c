#include "main.h"

/**
 * print_square - function draw square
 * @size: parameter
 * Return:  square
 */
void print_square(int size)
{
	int li, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= size; li++)
		{
			_putchar('#');
			for (s = 1; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
