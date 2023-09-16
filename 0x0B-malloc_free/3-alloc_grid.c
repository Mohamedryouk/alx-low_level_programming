#include "main.h"
/**
 *alloc_grid- functio to grid and allocate
 *@width: width of the array
 *@height: height of the array
 *Return: return type
 */
int **alloc_grid(int width, int height)
{
	int **std;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	std = malloc(sizeof(int *) * height);

	if (std == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		std[x] = malloc(sizeof(int) * width);

		if (std[x] == NULL)
		{
			for (; x >= 0; x--)
				free(std[x]);

			free(std);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			std[x][y] = 0;
	}
	return (std);
}
