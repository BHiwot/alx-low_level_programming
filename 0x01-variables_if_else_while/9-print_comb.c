#include<stdio.h>
/**
 * main - Print all combination of single digit number
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		purchar((i % 10) + '0');
		if (i == 9)
			continue;
		
		purchar(',');
		purchar(' ');
	}

	purchar('\n');
	
	return (0);
}
