#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - Fonction qui recoit deux entiens et alloue dyna une grille 2D
 * @width: largeur
 * @height: hauteur
 *
 * Return: Pointer ou Null si L + H <= 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
