#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: string 1
 * @src: string2
 * @n: n
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest, src);
}
