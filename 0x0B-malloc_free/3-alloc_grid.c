#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
int k, l, m, n;
int **a;

if (width <= 0 || height <= 0)
return (NULL);

a = malloc(sizeof(int *) * height);

if (a == NULL)
{
free(a);
return (NULL);
}

for (k = 0; k < height; k++)
{
a[k] = malloc(sizeof(int) * width);

if (a[k] == NULL)
{
for (l = k; l >= 0; l--)
{
free(a[l]);
}

free(a);
return (NULL);
}
}

for (m = 0; m < height; m++)
{
for (n = 0; n < width; n++)
{
a[m][n] = 0;
}
}
return (a);
}
