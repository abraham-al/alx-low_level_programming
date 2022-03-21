#include <stdio.h>
#include "main.h"
/**
 * main code starts hear
 * Return: return (0)
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	int *cd;
	*cd = c;
	cd = a;
	a = b;	
	*b = c;

}
int main(void)
{
	 int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}