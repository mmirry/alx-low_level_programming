#include<stdio.h>
/**
* main - A program that prints alphabet in lower case.
* Return: (0)
*/
int main(void)
{
char c;
c = 'a';
while
(c <= 'z')	
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
