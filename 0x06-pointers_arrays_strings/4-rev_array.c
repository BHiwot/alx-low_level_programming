#include "main.h"
/**
 * reverse_array - function reverse the content of array
 * @a: first input
 * @n: second input
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
	return (0);
}
