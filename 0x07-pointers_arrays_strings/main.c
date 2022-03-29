#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
        int i,j,k=0;

        for (i = 0; s[i] != '\0'; i++)
        {
                /* code */
                int l;
                l=k;
                for (j = 0; accept[j] != '\0'; j++)
                {
                        /* code */
                        if (s[i] == accept[j])
                        {
                                /* code */
                                k++;
                                
                        }
                        
                        
                }
                if (l == k)
                {
                        /* code */
                        break;
                }
                
        }
        return(k);
}

// unsigned int _strspn(char *s, char *accept)
// {
// 	int i, j;
// 	int c = 0;

// 	for (i = 0; s[i] != '\0'; i++)
// 	{
// 		if (s[i] != 32)
// 		{
// 			for (j = 0; accept[j] != '\0'; j++)
// 			{
// 				if (s[i] == accept[j])
// 					c++;
// 			}
// 		}
// 		else
// 			return (c);

// 	}
// 	return (c);
// }
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Abreham, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}