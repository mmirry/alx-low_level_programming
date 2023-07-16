#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main - A program to print the last digit number stored in variable n.
* Return: (0)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("The last digit of %d is %d and is greater than\n ", n, n % 10);
}
else if ((n % 10 < 6) && (n % 10) != 0)
{
printf("The last digit of %d is %d and is less than 6 and not equal to 0\n"
		, n, n % 10);
}
else
{
printf("The last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}

