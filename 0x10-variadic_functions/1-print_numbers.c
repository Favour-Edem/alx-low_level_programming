#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - variadic function to be used
 * @n: number of arguments to be passed
 * @separator: string to be passed
 * Return: Always 0, Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (n == 0)
{
return;
}

va_start(ap, n);

for (i = 0; i < n; i++)
{
if (separator == NULL)
{
printf("%d", va_arg(ap, int));
}
else if (i < n - 1)
{
(printf("%d%s", va_arg(ap, int), separator);
}
else
{
printf("%d", va_arg(ap, int));
}
}

printf("\n");
va_end(ap);
}

