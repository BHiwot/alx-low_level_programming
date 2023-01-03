#include "main.h"

/**
 * *_strpbrk - function searches string for any of set of bytes
 * @s: pointer
 * @accept: character
 * Return:  s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	return (NULL);
}
