#include<stdio.h>

/**
 * main - Print all single digit base 10 numbers only using putchr
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
