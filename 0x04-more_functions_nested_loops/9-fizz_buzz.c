#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints number 1 to 100
 * Return:  0
 */
int main(void)
{
	int i;
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", fi);
		else if (i % 5 == 0)
			printf("%s ", bu);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
