#include <stdio.h>
#include "main.h"
/**
 * print_array - print n element of array
 * @a: array
 * @n: number of element in array
 * REturn: a and n
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
		printf("%d, ", a[x]);
		if (x == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
