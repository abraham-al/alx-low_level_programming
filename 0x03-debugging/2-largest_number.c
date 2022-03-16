#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = b;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (c > b && c > a)
	{
		largest = c;
	}

	return (largest);
}
