#include <stdio.h>

/* This program return 
 * lowercase alphabatic
 * letter
 */
int main(void)
{
    int a= 97;
    int b= 122;
    int c= 65;
    int d= 90;
    while (a <= b)
    {
        /* code */
        putchar(a);
        a++;
    }
    while (c <= d)
    {
        /* code */
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
} 
