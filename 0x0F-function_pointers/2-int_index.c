#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - show the index of cmp array
 * @array: array to be seen
 * @size: array size
 * @cmp: compare function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0)
	{
		/* code */
		return (-1);
	}

	if (size && array && cmp)
	{
		/* code */
		for (i = 0; i < size; i++)
		{
			/* code */
			a = cmp(*(array + i));

			if (a == 1)
			{
				/* code */
				return (i);
			}
		}
	}
	return (-1);
}
