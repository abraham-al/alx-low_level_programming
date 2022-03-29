#include <stdio.h>
#include "main.h"


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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "abog";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}