#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - beginning
 * @i: single number input
 * Return: Last Digit of a number
 */

int print_last_digit(int i)
{
	int num;

	num = (i % 10);
	if (num < 0)
	{
		num = (-1 * num);
	}
	_putchar(num + '0');
	return (num);
}
