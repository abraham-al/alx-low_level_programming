#include "main.h"
/**
 * _strspn - find the start point of diffrent string on s
 * @s: string
 * @accept: search string
 * Return: the index of the different value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* code */
		l = k;

		for (j = 0; accept[j] != '\0'; j++)
		{
			/* code */
			if (s[i] == accept[j])
			{
				/* code */
				k++;
			}
		}
		if (l == k)
		{
			/* code */
			break;
		}
	}
	return (k);
}
