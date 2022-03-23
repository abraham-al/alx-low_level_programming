#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: string 1
 * @src: string2
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	i += 1;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest, src);
}
