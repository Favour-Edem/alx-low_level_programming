#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: string to be checked
 * Return: length of stringchecked
 */
size_t _strlen(const char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
