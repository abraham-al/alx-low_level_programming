#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
