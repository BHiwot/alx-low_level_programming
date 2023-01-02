#include "main.h"
/**
 * *_strchr - function locates a character in a str
 * @s: pointer
 * @c: character
 * Return: pointer or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
