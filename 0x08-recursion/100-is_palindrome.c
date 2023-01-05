#include "main.h"
/**
 * palindsec - obtains length of a
 * @a: string
 * @l: integer to count length
 * Return: On success 1.
 */
int palindsec(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palindsec(a + 1, l + 1));
}
/**
 * palindthr - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: On success 1.
 */
int palindthr(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindthr(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindsec(s, 0);
	return (palindthr(s, l));
}


