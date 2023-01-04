#include "main.h"
/**
 * _puts_recursion - function that print string
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		return (0);
	puts(*s);
	_puts_recursion(s + 1);
	puts('\n');
	return (s);
}
