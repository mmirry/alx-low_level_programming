#include <stdio.h>
/**
 * _strlen - returns the length of string.
 * @str: the string to get length of
 * return: length oF @str.
 */
size_t _strlen(const char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
