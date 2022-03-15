#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a[8] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;

for (i = 0; i < 8; i++)
{
int b = a[i];

_putchar(b);
}
_putchar('\n');
return (0);
}
