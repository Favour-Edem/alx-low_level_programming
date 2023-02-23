#include "main.h"

/**
 * print_times_table - prints the times table, starting with 0
 * @n: an integer parameter
 * Return: Always 0
 */
void print_times_table(int n)
{
int fat, slim, heav;

if (n >= 0 && n <= 15)
{
for (fat = 0; fat <= n; fat++)
{
_putchar('0');
for (slim = 1; slim <= n; slim++)
{
_putchar(',');
_putchar(' ');
heav = fat * slim;
if (heav <= 99)
_putchar(' ');
if (heav <= 9)
_putchar(' ');
if (heav >= 100)
{
_putchar((heav / 100) + '0');
_putchar(((heav / 10)) % 10 + '0');
}
else if (heav <= 99 && heav >= 10)
{
_putchar((heav / 10) + '0');
}
_putchar((heav % 10) + '0');
}
_putchar('\n');
}
}
}
