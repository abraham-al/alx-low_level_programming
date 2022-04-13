#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - a function that
 * @array: array to be printed
 * @size: size of array
 * @action: action to be performed on the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size == 0)
	{
		/* code */
		return;
	}
	int i;

	for (i = 0; i < size; i++)
	{
		/* code */
		(*action)(array[i]);
	}
}
