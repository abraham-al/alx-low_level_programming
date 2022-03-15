#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a[8] = {95, 112, 117, 116, 99, 104, 97, 114};

for (int i = 0; i < 8; i++)
{
int b = a[i];

putchar(b);
}
putchar('\n');
return (0);
}
