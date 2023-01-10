#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function concatenate two string
 * @s1: first string
 * @s2: second string
 * Return: return pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (k = 0; *(s2 + k) != '\0'; k++)
		;
	a = malloc(i + k + 1);
	if (a == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		a[i] = *(s1 + i);
	for (k = 0; *(s2 + k) != '\0'; k++)
		a[i + k] = *(s2 + k);
	a[i + k] = *(s2 + k);
	return (a);
}
