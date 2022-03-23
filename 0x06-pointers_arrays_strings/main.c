#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int i , j, k;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		continue;
	}
	
	i += 1;

	for (j=0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest,src);
}

int main()
{
	 char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;
	 int i;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
