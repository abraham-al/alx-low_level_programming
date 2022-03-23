#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: string 1
 * @src: string2
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		/* code */
		continue;
	}
	do {
		/* code */
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
