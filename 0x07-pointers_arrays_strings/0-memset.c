#include "main.h"
/**
 * _memset-copy value
 * @s: var1
 * @b: var2
 * @n: var3
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		/* code */
		s[i] = b;
		i++;
	}
	return (s);
}
