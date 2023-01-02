#include "main.h"
/**
 * *_strchr - function locates a character in a str
 * @s: pointer
 * @c: character
 * Return: pointer or 0
 */
char *_strchr(const char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
