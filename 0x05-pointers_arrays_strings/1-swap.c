#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: empty
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
int temp = *a;
*a = *b;
*b = temp;
}

