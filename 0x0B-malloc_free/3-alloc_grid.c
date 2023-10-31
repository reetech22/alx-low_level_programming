#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function for allocating a 2D array of integers
*
* @width:number of columns on the ggrid
*
* @height: number of rows on the grid
*
* Return: pointer to allocated 2D array on success or NULL on failure
*/

int **alloc_grid(int width, int height)
{
int **grid;
int j, k;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (j = 0; j < height; j++)
{
grid[j] = (int *)malloc(sizeof(int) * width);
if (grid[j] == NULL)
{
for (k = 0; k < j; k++)
free(grid[k]);
free(grid);
return (NULL);
}
for (k = 0; k < width; k++)
grid[j][k] = 0;
}

return (grid);
}

