#include "main.h"
#include <stdio.h>
/**
 * *_strspn - function get length of prefix
 * @s: pointer
 * @accept: character
 * Return:  s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
		c = 0;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			break;
		}
	}
	return (a);
}
