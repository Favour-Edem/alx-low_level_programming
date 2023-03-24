#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function to be used
 * @n: number of arguments to be passed
 * Return: Always 0, Success
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list list;

if (n == 0)
return (0);

va_start(list, n);

for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}

va_end(list);
return (sum);
}
