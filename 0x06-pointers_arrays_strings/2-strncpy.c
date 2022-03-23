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

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}
