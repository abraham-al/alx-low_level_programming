#include "main.h"
/**
 * _strpbrk - trim the string as it find first match
 * @s: the string to be trimed
 * @accept: string to be matched
 * Return: return address where the char is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* code */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* code */
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return (0);
}
