#include "main.h"

/**
 * print_alphabet_x10 - beginning
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (ch <= 'z')
	{
		while (i < 10)
		{
		_putchar(ch);
		ch++;
		}
	}
	_putchar('\n');
}
