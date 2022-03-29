#include <stdio.h>
#include "main.h"

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		
		if (s[i] == c)
		{
			return (s + i);
		}
                i++;
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
 char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}