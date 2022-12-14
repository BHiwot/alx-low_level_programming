#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int i, int j, int k)
{
	int largest;

	 if (a > b && b > c)
	{
		largest = a;
	}
	 else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
