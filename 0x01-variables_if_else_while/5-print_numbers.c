#include <stdio.h>
/**
 *  main - assign a random number to the variable n each time it is executed
 *  if the number is greater than 0: is positive, if the number is 0: is zero
 *  if the number is less than 0: is negative, followed by a new line
 *  Return: 0
 */
int main(void)
{
int a= 0;
while (a < 10)
{
    /* code */
    printf("%d", a);
    a++;
}
printf("\n");
return (0);
} 
