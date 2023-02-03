#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * get_bit - ..
 * @n: ..
 * @index: ..
 * Return: the value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
