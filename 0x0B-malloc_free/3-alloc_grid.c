#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **matrix;

	if (width == 0 || height == 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(int));
		if (matrix[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(matrix[a]);
			free(matrix);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	return (matrix);
}
