#include "main.h"
/**
 * *_strcat - function concatenates two string
 * @dest: first input
 * @src: second input
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; Str1[i]!='\0'; i++);
	for (j = 0; Str2[j]!='\0'; j++, i++)
	{
		Str1[i] = Str2[j];
	}
	Str1[i] = '\0';
	return 0;
}
