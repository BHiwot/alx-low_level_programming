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

	for (i = 0 ; i < n ; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
