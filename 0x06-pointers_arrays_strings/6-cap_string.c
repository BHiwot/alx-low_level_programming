#include "main.h"
/**
 * cap_string - function capitalizes all word
 * @n: input string
 * Return: n
 */
char *cap_string(char *n)
{
	int i, j;
	int cp = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}
		cp = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == separators[j])
			{
				j = 12;
				cp = 32
			}
		}
	}
	return (n);
}
