#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
        if (i == '9')
        {
            /* code */
            putchar(36);
        }
        else
        {
            putchar(44);
            putchar(32);
        }
		i++;
	}
    // putchar('\n');
    return (0);
}