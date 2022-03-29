#include "main.h"
/**
 * _strchr - find c on string
 * @s: input string
 * @c: a character to find
 * Return: reteurn c ptr
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/* code */
		if (s[i] == c)
		{
			/* code */
			return (s + i);
		}
		i++;
	}
	return (0);
}
