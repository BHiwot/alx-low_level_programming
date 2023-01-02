#include "main.h"
/**
 * *_memset -  function fill memory
 * @s: pointer
 * @b: constant byte
 * @n: 
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char* p=s;
	while(n--)
	{
		*p++ = (unsigned char)b;
	}
	return s;
}
