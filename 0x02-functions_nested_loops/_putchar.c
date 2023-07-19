#include<unistd.h>
/**
 *  _putchar.c - Writes character c in stdout
 *  @c: Character to print
 * Return: On success 1
 * On error: -1 is returned.
 */
int  _putchar(char c)
{
	return(write(1, &c, 1));
}
			

