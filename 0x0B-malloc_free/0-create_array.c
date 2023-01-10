#include "main.h"
#include <stdio.h>
/**
 * create_array - function create an array of char
 * @size: input
 * @c: input
 * Return: return NULL if size 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size);
	if (a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
