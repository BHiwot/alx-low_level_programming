#include "main.h"
/**
 * _puts - print a string
 * @str: first parameter
 *
 * Return:0
 */
void _puts(char *str)
{
	if (*str == '\0')
		return;
	_putchar("%c", *str);
	_putchar(++str);
}
