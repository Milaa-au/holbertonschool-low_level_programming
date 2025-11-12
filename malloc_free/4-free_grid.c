#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Recoit un TAB 2D (hauteur) libere toute la memoire
 * @grid: TAB 2D
 * @height: HAUTEUR
 *
 * Return: NULL si c'est vide
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
