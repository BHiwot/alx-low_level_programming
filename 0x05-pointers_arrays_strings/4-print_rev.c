#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: pointer parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int g, numb;
	int tmpry = 0;

	for(numb=0; s[numb] != 0; numb++);
	for(g = 0; g <numb/2; g++)
	{
		tmpry = s[g];
		s[g]=s[numb - 1 - g];
		s[numb - 1 - g] = tmpry;
	}
	for(g = 0; g < numb; g++)
		putchar(s[g]);
	printf(" \n ");
}
