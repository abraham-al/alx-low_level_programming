#include <stdio.h>

/* This program return 
 * lowercase alphabatic
 * letter
 */
int main(void)
{
    int a= 97;
    int b= 122;

    while (a <= b)
    {
        /* code */
        if(a != 113 && a != 101)
        {
            putchar(a);
        }
    a++;
    }
     putchar('\n');
     return (0);
} 
