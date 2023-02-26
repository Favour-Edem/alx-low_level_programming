#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: the number of times for diagonal line to be printed
 * Return: diagonal line to be printed
 */
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
