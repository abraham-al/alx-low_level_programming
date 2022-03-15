#include <stdio.h>
/*
 * print_alphabet functuion
 * strats hear
 */
void print_alphabet_x10(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
/*
 * print_alphabet functuion
 * strats hear
 */
void print_alphabet_x10(void)
{
for (int j = 0; j < 10; j++)
{
for (int i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
}
}
