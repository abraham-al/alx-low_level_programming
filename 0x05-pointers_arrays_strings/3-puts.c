#include "main.h"
/**
 * _puts -put string
 * @str: parameter
 * Return: always 0
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
