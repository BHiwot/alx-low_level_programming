#include<stdio.h>

/**
 * main - Prints lowercase and uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);

	putchar('\n');
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	return (0);
}
