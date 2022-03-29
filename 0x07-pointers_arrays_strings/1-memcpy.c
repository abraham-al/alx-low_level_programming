#include "main.h"
/**
 * _memcpy - copy the src to dest
 * @dest: var 1
 * @src: var 2
 * @n: var3
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		/* code */
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
