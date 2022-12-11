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
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
