#include "main.h"
/**
 * *_strcat - function concatenates two string
 * @dest: first input
 * @src: second input
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		j++;
		i++;
	}
	Str1[i] = '\0';
	return (0);
}
