#include "main.h"
#include <stdlib.h>

/**
 * array_range - Fonction qui creer un tableau d'entiers
 * @min: valeur minimal
 * @max: valeur maximal
 *
 * Return: integer (int)
 */

int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	i = malloc((max - min + 1) * sizeof(int));
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= (max - min); j++)
	{
		i[j] = min + j;
	}
	return (i);
}
