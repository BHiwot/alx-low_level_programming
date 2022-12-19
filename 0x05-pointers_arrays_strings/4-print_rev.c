#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: pointer parameter
 * Return: Reverse String
 */
void print_rev(char *s)
{
	int x = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		 x++;
	}
	for (n = (x - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
