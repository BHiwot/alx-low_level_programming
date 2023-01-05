#include "main.h"
#include <stddef.h>
/**
 * _sqrt - function
 * @i: same number as n
 * @j: iterate from 1 to n
 * Return:  1
 */
int _sqrt(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (_sqrt(i, j + 1));
}
/**
 * _sqrt_recursion - return square root
 * @n: input
 * Return: if n have no naturnal suare -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
