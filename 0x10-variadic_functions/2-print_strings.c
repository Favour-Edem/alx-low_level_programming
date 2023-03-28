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
unsigned int i;
char *str;
va_list ptn;

if (separator == NULL)
separator = "";

va_start(ptn, n);

for (i = 0; i < n; i++)
{
if (str == NULL)
str = "(nil)";
{
if (i < n - 1)
{
printf("%s%s", va_arg(ptn, char *), separator);
}
else
{
printf("%s", va_arg(ptn, char *));
}
}
}

printf("\n");
va_end(ptn);
}
