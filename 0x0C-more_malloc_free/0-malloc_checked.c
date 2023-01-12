#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the size to allocate
 * Return: pointer to allocated memory or 98 if failed.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
