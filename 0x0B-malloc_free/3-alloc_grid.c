#include <stdlib.h>
/**
 * alloc_grid - Allocate a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to a 2D array of integers, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
int i = 0;
int j = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}

int **grid = (int **) malloc(height * sizeof(int *));

if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));

if (grid[i] == NULL)
{
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}

