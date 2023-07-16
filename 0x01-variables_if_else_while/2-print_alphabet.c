#include<stdio.h>
#include<stdio.h>
/**
* main - Program that prints alphabet in lowercase.
* Return: (0)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	putchar("%c", letter);
}
putchar('\n');
return (0);
}

