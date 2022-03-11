#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
    int j = '1';
    int k = '2';
    while (i <= '7')
    {
        /* code */
        
        while (j <= '8')
        {
            /* code */
            while (k <= '9')
            {
                /* code */            
                if (!(i > j || j > k || i == j || i == k || j == k))
                {
                    /* code */
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    if (i == '7' && j == '8' && k == '9')
                    {
                        /* code */
                        putchar('\n');
                    }
                    else
                    {
                        putchar(44);
                        putchar(32);
                    } 
                }
                k++;
            }
            k='3';
            j++;
        }
        j='1';
        i++;           
    }
    return (0);
}