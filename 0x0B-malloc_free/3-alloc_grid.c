#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **grid, Aderemi, Tope;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (Aderemi = 0; Aderemi < height; Aderemi++)
	{
		grid[Aderemi] = malloc(width * sizeof(int));
		if (grid[Aderemi] == NULL)
		{
			while (Aderemi >= 0)
			{
				free(grid[Aderemi]);
				Aderemi--;
			}
			free(grid);
			return (NULL);
		}
		for (Tope = 0; Tope < width; Tope++)
			grid[Aderemi][Tope] = 0;
	}
	return (grid);
}
