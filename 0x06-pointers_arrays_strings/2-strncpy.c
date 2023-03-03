#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to be copied
 * @dest: string to be copied into
 * @n: number of bytes of data to be copied into
 * dest from src
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
