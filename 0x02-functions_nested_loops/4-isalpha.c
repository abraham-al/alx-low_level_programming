#include <stdio.h>

int _islower(int c);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
_islower(97);
}
/*
 * print_alphabet functuion
 * strats hear
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
	return (1);
    putchar(65);}
else
	return (0);

}