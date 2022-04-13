#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that
 * @array: array to be printed
 * @size: size of array
 * @action: action to be performed on the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			/* code */
			(action(*(array + i)));
		}
	}
}
