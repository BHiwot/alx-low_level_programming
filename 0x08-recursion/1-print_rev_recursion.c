#include "main.h"
/**
 * _puts_recursion - function that print string
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(*s);
		_putchar(s);
	}
}
