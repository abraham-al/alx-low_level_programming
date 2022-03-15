#include <stdio.h>

void print_alphabet(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
/*
 * print_alphabet functuion
 * strats hear
 */
void print_alphabet(void)
{
for (int i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
