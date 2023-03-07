#include <stddef.h>
#include "main.h"

/**
 * _strchr - returns a pointer to the
 * first occurence of the character c
 * @c: character to be searched for
 * @s: string to be searched through
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
