#include "main.h"
/**
 * factorial - return factorial of given number
 * @n: input
 * Return: return -1 if n is less than 0 else 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
