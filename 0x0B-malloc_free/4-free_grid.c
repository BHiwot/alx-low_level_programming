#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function free 2D array
 * @grid: first column
 * @height:the number of row in the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
