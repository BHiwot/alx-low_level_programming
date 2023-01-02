#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function locates a character in a str
 * @s: pointer
 * @c: character
 * Return:  0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
