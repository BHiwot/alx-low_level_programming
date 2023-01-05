#include "main.h"
#include <stddef.h>
/**
 * _prime - function
 * @i: same number as n
 * @j: iterate from 1 to n
 * Return:  1
 */
int _prime(int i, int j)
{
	if (i == j)
		return (1);
	else if (i % j == 0)
		return (0);
	return (_prime(i, j + 1));
}
/**
 * _sqrt_recursion - return square root
 * @n: input
 * Return: if n have no naturnal suare -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
