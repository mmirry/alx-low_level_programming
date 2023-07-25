#include <stdio.h>
/**
 *_ puts - prints a string
 * @str: the string to print
 * return: void
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
