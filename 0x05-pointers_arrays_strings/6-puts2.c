#include "main.h"
/**
 * puts2 -  prints every other character
 * @str: Pointer parameter
 * Return: print
 */
void puts2(char *str)
{
	int x = 0;

	for(; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
			_putchar(str[x]);
		else
			continue;
	}
	_putchar('\n');
}
