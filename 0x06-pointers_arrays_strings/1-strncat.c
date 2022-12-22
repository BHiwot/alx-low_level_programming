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

	while (*s1 != '\0' && n--)
	{
		*s1++ = *src++;
	}
	*s1 = '\0';
	return (dest);
}
