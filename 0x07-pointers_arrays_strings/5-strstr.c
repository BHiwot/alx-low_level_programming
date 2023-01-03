#include "main.h"

/**
 * *_strstr - function that locate a substring
 * @haystack: first pointer
 * @needle: second pointer
 * Return:  s
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0' ; a++)
	{
		for (b = 0, c = 0; needle[b] != '\0'  ; b++, c++)
		{
			if (haystack[c] != needle[b] || haystack[c] == '\0')
			{
				break;
			}
		}
		if (needle[b] == 0)
		{
			return (haystack + a);
		}
	}
	return (0);
}
