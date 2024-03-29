#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - ..
 * @name: ..
 * @f: ..
 * Return: ..
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
