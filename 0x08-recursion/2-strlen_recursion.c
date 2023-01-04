#include "main.h"
/**
 * __strlen_recursion - function that return length of string
 * @s: input
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
