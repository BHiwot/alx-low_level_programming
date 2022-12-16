#include "main.h"

/**
 * more_numbers - function that prints the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int a, co;

	for (co = 0; co < 10; co++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
