#include "main.h"

/**
 * _islower - beginning
 * @c: single letter input
 * Return: 1 if c is a letter lowercase or uppercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
