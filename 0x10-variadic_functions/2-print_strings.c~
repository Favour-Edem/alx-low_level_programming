#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to be used
 * @n: number of strings to be passed
 * @separator: string to be printed
 * Return: Always 0, Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int counter;
va_list ptn;

if (separator == NULL)
separator = "";

va_start(ptn, n);

for (counter = 0; counter < n; counter++)
{
char *str = va_arg(ptn, char *);
{
if (str == NULL)
str = "(nil)";
}
else
{ 
printf("%s", str);
}
{
if (counter != (n - 1))
{
printf("%s", separator);
}
}
}

printf("\n");
va_end(ptn);
}
