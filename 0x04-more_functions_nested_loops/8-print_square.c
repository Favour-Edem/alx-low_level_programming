#include "main.h"

/**
 * print_square -  prints the character #
 * @size: size of character to be printed
 * Return: size of caracter to be pribted
 */
void print_square(int size)
{
int x, y;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
