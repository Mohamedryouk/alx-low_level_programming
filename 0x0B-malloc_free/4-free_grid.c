#include "main.h"
/**
 *free_grid- function to be free
 *@grid: para
 *@height:height of array
 *Return: return 0 when its true or success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
