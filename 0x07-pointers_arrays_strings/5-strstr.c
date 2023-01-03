#include "main.h"

/**
 * *_strstr - function that locate a substring
 * @haystack: first pointer
 * @needle: second pointer
 * Return:  s
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);	
	}
	return (NULL);
}
