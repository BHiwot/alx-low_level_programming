#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * clear_bit - clear value of bit
 * @n: number
 * @index: ..
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n & (~i);
	return (1);
}
