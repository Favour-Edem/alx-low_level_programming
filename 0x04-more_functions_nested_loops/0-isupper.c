#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: an integer parameter
 * Return: 1 for upper letter, 0 for other
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
