#include "main.h"
/**
 * jack_bauer - beginning
 * 
 * Return: 24 hour line by line
 */

void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0 ; hr < 24 ; hr++)
	{
		for(mn = 0 ; mn < 60 ; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0'); 
			_putchar(':');
			_putchar((mn / 10) + '0'); 
			_putchar((mn % 10) + '0'); 
			_putchar('\n');
		}
	}
}
