#include "main.h"
#include <stdio.h>
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
	printf("%c", *str);
	printf(++str);
}
