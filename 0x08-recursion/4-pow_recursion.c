#include "main.h"
/**
 * _pow_recursion - return x raised to power of y
 * @x: input
 * @y: input
 * Return: return -1 if n is less than 0 else 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
