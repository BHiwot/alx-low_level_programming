#include "main.h"
/**
 * puts_half - print half of a string
 * @str: input parameter
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, j, ln;

	ln = 0;

	for (i = 0; str[i] != '\0'; i++)
		ln++;

	j = (ln / 2);
	if ((ln % 2) == 1)
		j = ((ln + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
