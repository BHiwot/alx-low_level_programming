#include "main.h"
/**
 * _atoi - function that convert string to integer
 * @s: input
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int n = 0;
	int c = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			c *= -1;
		i++;
	}
	while ((s[i] >= '0' || s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	c *= -1;
	return (n * c);
}
