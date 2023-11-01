#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free memory allocated for a 2D grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
int i = 0;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

