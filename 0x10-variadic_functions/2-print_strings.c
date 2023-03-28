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

va_start(ptn, n);

for (i = 0; i < n; i++)
{
str = va_arg(ptn, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(ptn);
}
