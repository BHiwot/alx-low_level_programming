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
	s = malloc(size);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
