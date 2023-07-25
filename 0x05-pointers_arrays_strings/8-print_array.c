#include "main.h"
#include <stdio.h>
/**
 * print_ arrays - prints n element of an array
 * @a: array
 * @n: number of elements
 * return: void
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
