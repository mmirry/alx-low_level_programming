#include<stdio.h>
#include<time.h>
#include<stdio.h>
/**
* main - Program that prints a line with positive, negative or zero.
* Return: (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)	
{	
printf("%d is positive\n", n);
}
if else (n < 0)
{
printf("%d is negative\n", n);
}
else (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}

