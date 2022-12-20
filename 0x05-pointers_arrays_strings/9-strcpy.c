#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
