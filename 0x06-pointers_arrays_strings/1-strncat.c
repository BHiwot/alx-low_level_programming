#include "main.h"
/**
 * _strncat - function concatenates two string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	while (*s1 != '\0')
	{
		s1++;
	}
	while (n--)
	{
		if (!(*s1++ == *src))
		{
			return (dest);
		}
	}
	*s1 = '\0';
	return (dest);
}
