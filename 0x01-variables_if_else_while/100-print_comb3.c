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
    while (i <= '9')
    {
        /* code */
        
        while (j <= '9')
        {
            /* code */
            if (!(i > j || i == j))
            {
                /* code */
                putchar(i);
                putchar(j);
                if (i == '8' && j == '9')
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
            j++;
        }
        j='1';
        i++;           
    }
    return (0);
}