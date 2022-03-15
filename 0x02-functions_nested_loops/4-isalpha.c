#include "main.h"

/**
 * _islower - check the code
 *
 * Return: Always 0.
 * @c: character to test.
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
	return (1);
    _putchar(65);}
else
	return (0);

}
