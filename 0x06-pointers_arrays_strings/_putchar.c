#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to print
 * return: 1 on success
 * on error: return -1
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
