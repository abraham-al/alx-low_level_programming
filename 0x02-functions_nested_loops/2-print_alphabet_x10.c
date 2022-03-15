#include "main.h"

/**
 * print_alphabet_x10- prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
int j;

for (j = 0; j < 10; j++)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
