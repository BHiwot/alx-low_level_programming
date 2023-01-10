#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * @str: string
 * Return: return NULL if str
 */
char *_strdup(char *str)
{
	char *a;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	a = malloc(i + 1);
	if (a == 0 || a == NULL)
		return (NULL);
	for (i = 0; * (str + i) != '\0'; i++)
	{
		a[i] = *(str + i);
	}
	a[i] = *(str + i);
	return (s);
}
