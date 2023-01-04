#include "main.h"
/**
 * _strlen_recursion - function that return length of string
 * @s: input
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1));
	}
}
