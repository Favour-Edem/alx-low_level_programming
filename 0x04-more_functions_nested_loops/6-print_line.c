#include "main.h"

/**
 * print_line - prints the character _
 * @n: number of times to print _
 * Return: character or new line, depending on condition
 */
void print_line(int n)
{
int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
