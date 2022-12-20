#include "main.h"
/**
 * rev_string - function that reverse astring
 * @s: pointer parameter
 * Return: 0
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int x;

	while (s[c] != '\0')
		x++;
	for (x = 0; x < c; x++)
	{
		c--;
		rv = s[x];
		s[x] = s[c];
		s[c] = rv;
	}
}
