#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * description - prints number 1-100 w/
 * fizz for multiple of 3,buzz for multiples of 5
 * and fizzbuzz for multiples of both
 * return: 0
 */
int main(void)
{
int i;
for (i = 1; 1 <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
