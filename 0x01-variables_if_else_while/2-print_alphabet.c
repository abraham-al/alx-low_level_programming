#include <stdio.h>

/* This program return 
 * lowercase alphabatic
 * letter
 */
int main(void)
{
    int a= 97;
    int b= 122;

    while (a <= 122)
    {
        /* code */
        putchar(a);
        a++;  
    }
    putchar('\n');
    return (0);
} 
