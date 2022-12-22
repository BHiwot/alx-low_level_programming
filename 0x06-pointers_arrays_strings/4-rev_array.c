#include "main.h"
/**
 * reverse_array - function reverse the content of array
 * @a: first input
 * @n: second input
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int start, end;

	for (int start = 0, end = n - 1 ; start < end; start++, end++)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
