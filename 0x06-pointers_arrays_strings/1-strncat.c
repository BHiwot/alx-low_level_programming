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
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
