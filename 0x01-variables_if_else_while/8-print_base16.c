#include<stdio.h>

/**
 * main - Print Hexadicimal lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	for (i = 'a' ; i <= 'f' ; i++)
		putchar((i % 10), '0');
	putchar('\n');
	return (0);
}
