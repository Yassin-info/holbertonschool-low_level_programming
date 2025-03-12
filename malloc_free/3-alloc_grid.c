#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Creates a 2D integer grid initialized to 0
* @width: Number of columns in the grid
* @height: Number of rows in the grid
* Return: Pointer to newly allocated 2D array, or NULL if:
* - Width/height are 0/negative
* - Memory allocation fails
*/
int **alloc_grid(int width, int height)
{

int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);
}
for (i = 0; i < height; i++)
{

grid[i] = malloc(width * sizeof(int));
}
if (grid[i] == NULL)
{

for (j = 0; j < i; j++)

free(grid[j]);

free(grid);

return (grid);
}
