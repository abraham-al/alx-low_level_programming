#include "main.h"

/**
 * _strncpy - a function that concatenates two strings.
 * @dest: string 1
 * @src: string2
 * @n: n
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		/* code */
		dest[i++] = '\0';
	}

	return (dest, src);
}
