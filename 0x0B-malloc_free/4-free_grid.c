#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: - 2D grid to be freed
 * @height: height of grid to be filled
 * Return: empty
 */
void free_grid(int **grid, int height)
{
int k;

for (k = 0; k < height; k++)
{
free(grid[k]);
}

free(grid);
}
