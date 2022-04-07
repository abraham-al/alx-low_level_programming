#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - assign memory
 * @b: use size argument to be assigned
 * Return: return memory poiner
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		/* code */
		exit(98);
	}
	return (p);
}
