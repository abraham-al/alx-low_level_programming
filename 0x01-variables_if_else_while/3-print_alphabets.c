#include <stdio.h>
/*
 * This program return 
 * lowercase alphabatic
 * letter
 */
int main(void)
{
    char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
} 
