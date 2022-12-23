#include "main.h"
/**
 * cap_string - function capitalizes all word
 * @s: input string
 * Return: n
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int cs = 13;
	char sc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cs)
		{
			if ((a == 0 || s[a - 1] == sc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
