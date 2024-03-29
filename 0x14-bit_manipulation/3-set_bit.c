#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * set_bit  - set value of bit to 1
 * @n: ...
 * @index: ...
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}
