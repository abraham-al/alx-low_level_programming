#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		int b= n % 10;
		int c= b * b;
		int a= sqrtf(c);
		if ( a > 5){
			printf("Last digit of %d is %d and is greater than 5\n", n, a);
		}
		else if( a == 0){
			printf("Last digit of %d is %d and is 0\n", n, a); 
		}
		else if(a < 6 && a != 0) {
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
		}
		return (0);
}