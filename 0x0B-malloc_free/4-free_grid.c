#include "main.h"
#include <stdlib.h>

/**
* free_grid - function to free a 2D grid created by alloc_grid
*
* @grid: pointer to 2D grid that is to be freed.
*
* @height: number of rows on the grid
*/

void free_grid(int **grid, int height)
{
int j;

if (grid == NULL || height <= 0)
return;

for (j = 0; j < height; j++)
{
if (grid[j] != NULL)
{
free(grid[j]);
grid[j] = NULL;
}
}

free(grid);
}

